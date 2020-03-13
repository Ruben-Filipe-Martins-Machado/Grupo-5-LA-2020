cmake_minimum_required(VERSION 3.15)
project(Guiao5 C)

set(CMAKE_C_STANDARD 99)

add_executable(Guiao5 main.c dados.h dados.c logica.c logica.h interface.c interface.h)
