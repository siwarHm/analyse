cmake_minimum_required(VERSION 3.21)
project(analyse C)

set(CMAKE_C_STANDARD 99)

add_executable(analyse main.c cFiles/calculScore.c hFiles/calculScore.h cFiles/transcription.c hFiles/transcription.h cFiles/calculScorePolarite.c hFiles/calculScorePolarite.h)
