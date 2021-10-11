#!/bin/bash

PATCHELF=""

$PATCHELF --remove-needed libbacktrace.so bin/gx_*
$PATCHELF --remove-needed libunwind.so bin/gx_*

#$PATCHELF --add-needed liblog.so bin/gx_*
#$PATCHELF --add-needed fakelogprint.so bin/gx_*

$PATCHELF --add-needed libshims_binder.so lib64/libfpservice.so

sed -i 's|libandroid_runtime.so|libshims_android.so\x00\x00|g' lib64/hw/fingerprint.goodix.so
