cmake_minimum_required(VERSION 4.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        ARRAYS/24-02/example1.cpp
        ARRAYS/24-02/example2.cpp
        ARRAYS/24-02/example2-Piero.cpp
        ARRAYS/24-02/sumMat.cpp
        ARRAYS/24-02/changeMats.cpp
        ARRAYS/01-03/Teory/march01.cpp
        ARRAYS/01-03/Teory/Arr_Puntero1.cpp
        ARRAYS/08-03/finalArr.cpp
        MATRICES/13-03/IntroMatriz.cpp
        MATRICES/13-03/exercise01.cpp
        "MATRICES/14-03/exercice functions.cpp"
)
