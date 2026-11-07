cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Send the finished exe to Myproject/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Create the exe from these files
add_executable(myapp
    main.cpp
    src/greet.cpp
    src/calc.cpp
)

# Tell the compiler where the .h files are
target_include_directories(myapp PRIVATE ${CMAKE_SOURCE_DIR}/include)