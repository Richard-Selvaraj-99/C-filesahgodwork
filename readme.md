Line	Meaning
cmake_minimum_required	Oldest CMake version allowed
project(MyProject)	Names your project
set(CMAKE_CXX_STANDARD 17)	Use C++17
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ...)	Puts the exe in the bin folder
add_executable(myapp ...)	Make an exe called myapp from the listed .cpp files. Only .cpp files go here, never .h
target_include_directories	Lets #include "greet.h" find files in include/