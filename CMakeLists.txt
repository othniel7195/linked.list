cmake_minimum_required(VERSION 3.9)
project(C1 C)

set(CMAKE_C_STANDARD 99)

add_executable(C1 main.c LinkedList.c LinkedList.h Point.c Point.h linkedStack.c linkedStack.h linkedQueue.c linkedQueue.h arrayStack.h arrayStack.c arrayQueue.c arrayQueue.h)