#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_cn_edu_hqu_cst_android_1project2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
