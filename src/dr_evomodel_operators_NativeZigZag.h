/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dr_evomodel_operators_NativeZigZag */

#ifndef _Included_dr_evomodel_operators_NativeZigZag
#define _Included_dr_evomodel_operators_NativeZigZag
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     dr_evomodel_operators_NativeZigZag
 * Method:    create
 * Signature: (ILdr/inference/hmc/PrecisionColumnProvider;[D)I
 */
JNIEXPORT jint JNICALL Java_dr_evomodel_operators_NativeZigZag_create
  (JNIEnv *, jobject, jint, jobject, jdoubleArray, jdoubleArray);

/*
 * Class:     dr_evomodel_operators_NativeZigZag
 * Method:    operate
 * Signature: (Ldr/inference/hmc/PrecisionColumnProvider;[D[D[D[DD)I
 */
JNIEXPORT jint JNICALL Java_dr_evomodel_operators_NativeZigZag_operate
  (JNIEnv *, jobject, jint, jobject, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     dr_evomodel_operators_NativeZigZag
 * Method:    getNextEvent
 * Signature: ([D[D[D[DD)[Ldr/inference/operators/hmc/AbstractParticleOperator/MinTravelInfo;
 */
JNIEXPORT jobject JNICALL Java_dr_evomodel_operators_NativeZigZag_getNextEvent
  (JNIEnv *, jobject, jint, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif
