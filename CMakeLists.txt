cmake_minimum_required(VERSION 3.29)
project(Programming_Basics_with_C___09_2024)

set(CMAKE_CXX_STANDARD 20)

# Find all .cpp files in the "lab" and "exercise" directories of 01_FirstStepsInProgramming
file(GLOB LAB_SOURCES_01 "01_FirstStepsInProgramming/lab/*.cpp")
file(GLOB EXERCISE_SOURCES_01 "01_FirstStepsInProgramming/exercise/*.cpp")

# Find all .cpp files in the "lab" directory of 02_ConditionalStatements
file(GLOB LAB_SOURCES_02 "02_ConditionalStatements/lab/*.cpp")

# Create separate executables for each .cpp file in the "lab" directory of 01_FirstStepsInProgramming
foreach(lab_source ${LAB_SOURCES_01})
    get_filename_component(lab_exec_name ${lab_source} NAME_WE)
    add_executable(${lab_exec_name}_lab ${lab_source})
endforeach()

# Create separate executables for each .cpp file in the "exercise" directory of 01_FirstStepsInProgramming
foreach(exercise_source ${EXERCISE_SOURCES_01})
    get_filename_component(exercise_exec_name ${exercise_source} NAME_WE)
    add_executable(${exercise_exec_name}_exercise ${exercise_source})
endforeach()

# Create separate executables for each .cpp file in the "lab" directory of 02_ConditionalStatements
foreach(lab_source_02 ${LAB_SOURCES_02})
    get_filename_component(lab_exec_name_02 ${lab_source_02} NAME_WE)
    add_executable(${lab_exec_name_02}_lab_02 ${lab_source_02})
endforeach()
