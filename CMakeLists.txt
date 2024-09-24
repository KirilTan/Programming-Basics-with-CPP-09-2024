cmake_minimum_required(VERSION 3.29)
project(Programming_Basics_with_C___09_2024)

set(CMAKE_CXX_STANDARD 20)

# Add the main file
add_executable(Programming_Basics_with_C___09_2024 main.cpp
        01_first_steps_in_programming/lab/01.cpp
        01_first_steps_in_programming/lab/02.cpp
        01_first_steps_in_programming/lab/03.cpp
        01_first_steps_in_programming/lab/04.cpp
        01_first_steps_in_programming/lab/05.cpp
        01_first_steps_in_programming/lab/06.cpp
        01_first_steps_in_programming/lab/07.cpp
        01_first_steps_in_programming/lab/08.cpp
        01_first_steps_in_programming/lab/09.cpp
)

# Add all .cpp files from /01_first_steps_in_programming/lab
file(GLOB LAB_FILES "01_first_steps_in_programming/lab/*.cpp")

# Add these files to the executable
target_sources(Programming_Basics_with_C___09_2024 PRIVATE ${LAB_FILES})