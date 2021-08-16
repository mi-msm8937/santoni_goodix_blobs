#!/bin/bash -xe

OBJDUMP="/home/zqm/disk-1/android/compiler/gcc-4.9-n/bin/aarch64-linux-android-objdump"

for i in `ls WORKING/`; do
	git checkout script.py
	grep -B10 "Parcel aPStack" DATA/${i}.c | grep "//" > DATA/${i}_f
	sed -i '/WARNING:/d' DATA/${i}_f
	$OBJDUMP -d WORKING/${i} > DATA/${i}.asm
	sed -i "s|THEASMFILE|DATA/${i}.asm|g" script.py
	sed -i "s|THEFUNCFILE|DATA/${i}_f|g" script.py
	sed -i "s|THEOUTFILE|WORKING/${i}|g" script.py
	python3 script.py
done
