// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// createEngine
Rcpp::List createEngine(int dimension, std::vector<double>& lowerBounds, std::vector<double>& upperBounds, long flags, long info, long seed);
RcppExport SEXP _largeMTN_createEngine(SEXP dimensionSEXP, SEXP lowerBoundsSEXP, SEXP upperBoundsSEXP, SEXP flagsSEXP, SEXP infoSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type lowerBounds(lowerBoundsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type upperBounds(upperBoundsSEXP);
    Rcpp::traits::input_parameter< long >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< long >::type info(infoSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(createEngine(dimension, lowerBounds, upperBounds, flags, info, seed));
    return rcpp_result_gen;
END_RCPP
}
// createNutsEngine
Rcpp::List createNutsEngine(int dimension, std::vector<double>& lowerBounds, std::vector<double>& upperBounds, long flags, long info, long seed, bool randomFlg, double stepSize, NumericVector& mean, NumericVector& precision);
RcppExport SEXP _largeMTN_createNutsEngine(SEXP dimensionSEXP, SEXP lowerBoundsSEXP, SEXP upperBoundsSEXP, SEXP flagsSEXP, SEXP infoSEXP, SEXP seedSEXP, SEXP randomFlgSEXP, SEXP stepSizeSEXP, SEXP meanSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type lowerBounds(lowerBoundsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type upperBounds(upperBoundsSEXP);
    Rcpp::traits::input_parameter< long >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< long >::type info(infoSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type randomFlg(randomFlgSEXP);
    Rcpp::traits::input_parameter< double >::type stepSize(stepSizeSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(createNutsEngine(dimension, lowerBounds, upperBounds, flags, info, seed, randomFlg, stepSize, mean, precision));
    return rcpp_result_gen;
END_RCPP
}
// setMean
void setMean(SEXP sexp, NumericVector& mean);
RcppExport SEXP _largeMTN_setMean(SEXP sexpSEXP, SEXP meanSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mean(meanSEXP);
    setMean(sexp, mean);
    return R_NilValue;
END_RCPP
}
// setPrecision
void setPrecision(SEXP sexp, NumericVector& precision);
RcppExport SEXP _largeMTN_setPrecision(SEXP sexpSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type precision(precisionSEXP);
    setPrecision(sexp, precision);
    return R_NilValue;
END_RCPP
}
// doSomething
void doSomething(SEXP sexp, std::vector<double>& data);
RcppExport SEXP _largeMTN_doSomething(SEXP sexpSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type data(dataSEXP);
    doSomething(sexp, data);
    return R_NilValue;
END_RCPP
}
// getNextEvent
Rcpp::List getNextEvent(SEXP sexp, NumericVector& position, NumericVector& velocity, NumericVector& action, NumericVector& logpdfGradient, NumericVector& momentum);
RcppExport SEXP _largeMTN_getNextEvent(SEXP sexpSEXP, SEXP positionSEXP, SEXP velocitySEXP, SEXP actionSEXP, SEXP logpdfGradientSEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type velocity(velocitySEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type action(actionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logpdfGradient(logpdfGradientSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(getNextEvent(sexp, position, velocity, action, logpdfGradient, momentum));
    return rcpp_result_gen;
END_RCPP
}
// oneIteration
Rcpp::List oneIteration(SEXP sexp, NumericVector& position, NumericVector& momentum, double time);
RcppExport SEXP _largeMTN_oneIteration(SEXP sexpSEXP, SEXP positionSEXP, SEXP momentumSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< double >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(oneIteration(sexp, position, momentum, time));
    return rcpp_result_gen;
END_RCPP
}
// oneNutsIteration
Rcpp::List oneNutsIteration(SEXP sexp, NumericVector& position, NumericVector& momentum);
RcppExport SEXP _largeMTN_oneNutsIteration(SEXP sexpSEXP, SEXP positionSEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(oneNutsIteration(sexp, position, momentum));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_largeMTN_createEngine", (DL_FUNC) &_largeMTN_createEngine, 6},
    {"_largeMTN_createNutsEngine", (DL_FUNC) &_largeMTN_createNutsEngine, 10},
    {"_largeMTN_setMean", (DL_FUNC) &_largeMTN_setMean, 2},
    {"_largeMTN_setPrecision", (DL_FUNC) &_largeMTN_setPrecision, 2},
    {"_largeMTN_doSomething", (DL_FUNC) &_largeMTN_doSomething, 2},
    {"_largeMTN_getNextEvent", (DL_FUNC) &_largeMTN_getNextEvent, 6},
    {"_largeMTN_oneIteration", (DL_FUNC) &_largeMTN_oneIteration, 4},
    {"_largeMTN_oneNutsIteration", (DL_FUNC) &_largeMTN_oneNutsIteration, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_largeMTN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
