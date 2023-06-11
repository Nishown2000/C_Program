#!/usr/bin/env python3

import os

cmakelist = os.system("cmake -S . -B build/")
print("Executing CMakelist command %d" % cmakelist)
make = os.system("make -C build/")
print("Executing Make command %d" % make)
run = os.system("./build/Main/main")
print("Executing Run command %d" % run)