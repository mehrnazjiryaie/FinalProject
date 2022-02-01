cmake_minimum_required(VERSION 3.0)
project(main)
add_executable(app src/main.cpp src/shoes.cpp src/Femaleshoe.cpp src/MaleShoe.cpp src/SportShoe.cpp src/Shoe.cpp)
include_directories(include)