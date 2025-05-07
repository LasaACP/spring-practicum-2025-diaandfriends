cmake_minimum_required(VERSION 3.29)
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
        src/hashing.h
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
        main_test.cpp
)

add_test(NAME compressorTestsExe
        COMMAND compressorTests)