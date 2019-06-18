package com.github.lakinduboteju.hellondk;

public class NativeHello {
    static {
        final String LIB_NAME = "NativeHello";
        System.loadLibrary(LIB_NAME);
    }

    public static native String getHelloMessage();
}
