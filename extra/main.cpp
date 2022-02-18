//
// Created by zhenyuzhang on 2/4/22.
//

#include <vector>

#include "../src/AbstractZigZag.hpp"
#include "../src/ZigZag.hpp"
#include "../src/NoUTurn.hpp"
#include "../src/UniformGenerator.h"
using namespace std;
int main(int argCount, char** args) {
    int dimension = 2;
    double time = 100;
    std::vector<double> mask = {1,1};
    std::vector<double> observed = {1,1};
    std::vector<double> parameterSign = {1,1};

    std::vector<double> position = {0.1,0.1};
    std::vector<double> velocity = {1,-1};
    std::vector<double> action = {1,-1};
    std::vector<double> gradient = {-0.05263158,-0.05263158};
    std::vector<double> momentum = {-0.3980153048394741, 2.2483327571774736};

    long flags = 128L;
    long info = 1L;
    long seed = 666L;

    std::vector<double> mean={0, 0};
    std::vector<double> precision={5.263158, -4.736842, -4.736842, 5.263158};

    auto zz = zz::make_unique<zz::ZigZag<zz::DoubleSseTypeInfo>>(
            dimension, mask.data(), observed.data(), parameterSign.data(), flags, info, seed, mean, precision);
    std::shared_ptr<zz::ZigZag<zz::DoubleSseTypeInfo>> shared = std::move(zz);
    std::unique_ptr<nuts::NoUTurn> nuts = nuts::dispatchNuts(100, 100, 666, FALSE, 0.08, shared);

    for (int n = 0; n < 1; ++n) {
        //cout << " iteration " << n << "started ";
        auto res = nuts->takeOneStep(zz::DblSpan(position), zz::DblSpan(momentum));
        //auto res1 = nuts->takeOneStep1();
        cerr << " iteration " << n << " position after:";
        for (int i = 0; i < res.size(); ++i) {
            cerr << res[i] << " ";
        }
        cerr << "\n";
    }
    return 666;
}
