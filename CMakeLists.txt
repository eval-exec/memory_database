cmake_minimum_required(VERSION 3.13)
project(mmdb_copy C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(mmdb_copy
        ttree.c
        ttree.h
        ttree_defs.h
        ttree_test.c
        ttreebuffer.c
        ttreebuffer.h)
