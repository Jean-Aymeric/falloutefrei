cmake_minimum_required(VERSION 3.27)
project(falloutefrei C)

set(CMAKE_C_STANDARD 11)

add_executable(falloutefrei main.c
        character.c
        character.h
        team.c
        team.h)
