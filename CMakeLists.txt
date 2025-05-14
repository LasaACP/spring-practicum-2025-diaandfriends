cmake_minimum_required(VERSION 3.28.3)
project(compressor)

set(CMAKE_CXX_STANDARD 14)
enable_testing()

add_executable(compressor
        main.cpp
        src/compressor.cpp
        src/compressor.h
        src/decompressor.cpp
        src/decompressor.h
        src/huffman.cpp
        src/huffman.h
        src/hashing.cpp
        src/frequencyCounter.cpp
        src/frequencyCounter.h
        src/hashing.h
        src/readFile.cpp
        src/readFile.h
        src/head.cpp
        src/head.h
        src/head.cpp
        src/head.cpp
)

add_executable(compressorTests
        src/compressor.cpp
        src/compressor.h
        src/decompressor.cpp
        src/decompressor.h
        src/huffman.cpp
        src/huffman.h
        src/hashing.cpp
        src/hashing.h
        src/frequencyCounter.cpp
        src/frequencyCounter.h
        main_test.cpp
        src/readFile.cpp
        src/readFile.h
        src/head.cpp
        src/head.h
        src/head.cpp
        src/head.cpp
)

add_test(NAME compressorTestsExe
        COMMAND compressorTests)