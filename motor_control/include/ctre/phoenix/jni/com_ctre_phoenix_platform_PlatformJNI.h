/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ctre_phoenix_platform_PlatformJNI */

#ifndef _Included_com_ctre_phoenix_platform_PlatformJNI
#define _Included_com_ctre_phoenix_platform_PlatformJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ctre_phoenix_platform_PlatformJNI
 * Method:    JNI_SimCreate
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_platform_PlatformJNI_JNI_1SimCreate
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_ctre_phoenix_platform_PlatformJNI
 * Method:    JNI_SimDestroy
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_platform_PlatformJNI_JNI_1SimDestroy
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_ctre_phoenix_platform_PlatformJNI
 * Method:    JNI_SimDestroyAll
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_platform_PlatformJNI_JNI_1SimDestroyAll
  (JNIEnv *, jclass);

/*
 * Class:     com_ctre_phoenix_platform_PlatformJNI
 * Method:    JNI_SimConfigGet
 * Signature: (IIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_platform_PlatformJNI_JNI_1SimConfigGet
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_platform_PlatformJNI
 * Method:    JNI_SimConfigSet
 * Signature: (IIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_platform_PlatformJNI_JNI_1SimConfigSet
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
