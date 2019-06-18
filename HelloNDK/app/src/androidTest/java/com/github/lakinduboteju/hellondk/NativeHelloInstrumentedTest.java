package com.github.lakinduboteju.hellondk;

import android.support.test.runner.AndroidJUnit4;

import org.junit.Test;
import org.junit.runner.RunWith;

import static org.junit.Assert.*;

@RunWith(AndroidJUnit4.class)
public class NativeHelloInstrumentedTest {
    @Test
    public void testGetHelloMessage() {
        assertEquals("Hello, NDK!", NativeHello.getHelloMessage());
    }
}
