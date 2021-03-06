/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_wolfcrypt_EccKey */

#ifndef _Included_com_wolfssl_wolfcrypt_EccKey
#define _Included_com_wolfssl_wolfcrypt_EccKey
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wolfssl_wolfcrypt_EccKey
 * Method:    EccPublicKeyToDer
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_wolfcrypt_EccKey_EccPublicKeyToDer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_wolfssl_wolfcrypt_EccKey
 * Method:    EccPrivateKeyToDer
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_wolfcrypt_EccKey_EccPrivateKeyToDer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_wolfssl_wolfcrypt_EccKey
 * Method:    EccPrivateKeyToPKCS8
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_wolfcrypt_EccKey_EccPrivateKeyToPKCS8
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
