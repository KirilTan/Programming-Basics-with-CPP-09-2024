cmake_minimum_required(VERSION 3.29)
project(Programming_Basics_with_C___09_2024)

set(CMAKE_CXX_STANDARD 20)

# Find all .cpp files in the "lab" and "exercise" directories
file(GLOB LAB_SOURCES "01_FirstStepsInProgramming/lab/*.cpp")
file(GLOB EXERCISE_SOURCES "01_FirstStepsInProgramming/exercise/*.cpp")

# Create separate executables for each .cpp file in the "lab" directory
foreach(lab_source ${LAB_SOURCES})
    get_filename_component(lab_exec_name ${lab_source} NAME_WE)
    add_executable(${lab_exec_name}_lab ${lab_source})
endforeach()

# Create separate executables for each .cpp file in the "exercise" directory
foreach(exercise_source ${EXERCISE_SOURCES})
    get_filename_component(exercise_exec_name ${exercise_source} NAME_WE)
    add_executable(${exercise_exec_name}_exercise ${exercise_source})
endforeach()
