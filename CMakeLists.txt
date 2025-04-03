cmake_minimum_required(VERSION 3.10)    

project(CalcApp)

set(SOURCE_FILES                       
    calculator.cpp
    test.cpp	   
)

add_executable(trial  ${SOURCE_FILES})
