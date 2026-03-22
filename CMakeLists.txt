cmake_minimum_required(VERSION 3.10)

project(LearningC)

option(BUILD_32_BIT "Build as 32-bit" False)

if(BUILD_32_BIT)
    message(STATUS "Building 32-bit")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32 -no-pie")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32 -no-pie")

    set(ARCH_FOLDER "32")
else()
    message(STATUS "Building 64-bit")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m64")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")

    set(ARCH_FOLDER "64")
endif()

# Output folder based on architecture
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/${ARCH_FOLDER})

# Get all .c files in this folder
file(GLOB C_FILES "*.c")

# Loop through each file
foreach(file ${C_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach()