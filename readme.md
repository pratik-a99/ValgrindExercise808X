# Valgrind Exercise - 117513615
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview

This exercise explores the valgrind tool to improve code quality during development and testing. Valgrind helps detect several types of code issues:

* Undefined behavior
* Function and memory profiling
* Data-race detection
* Memory leak detection


## Standard install via command-line
```
git clone --recursive https://github.com/pratik-a99/ValgrindExercise808X
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## KCachegrind Outputs

![Output Screen 1](https://github.com/pratik-a99/ValgrindExercise808X/blob/main/result/KCachegrind/KCachegrind_result1.png)
![Output Screen 2](https://github.com/pratik-a99/ValgrindExercise808X/blob/main/result/KCachegrind/KCachegrind_result2.png)
![Output Screen 3](https://github.com/pratik-a99/ValgrindExercise808X/blob/main/result/KCachegrind/KCachegrind_result3.png)

## Results 

All results stored in seperate subdirectories in the result directory, which include
* Cpplint
* Cppcheck
* Valgrind
* KCachegrind
* Doxygen	
