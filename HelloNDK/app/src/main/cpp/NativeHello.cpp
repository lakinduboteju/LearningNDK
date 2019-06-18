//
// Created by Lakindu Boteju on 6/18/19.
//
#include <jni.h>
#include <string>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_github_lakinduboteju_hellondk_NativeHello_getHelloMessage(
            JNIEnv *env,
            jobject thiz) {
        return env->NewStringUTF("Hello, NDK!");
    }
}
