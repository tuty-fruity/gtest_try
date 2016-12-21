cmake_minimum_required (VERSION 2.8)
project (gtest_exercise)

#set (gtest_disable_pthreads on)
#config_compiler_and_linker()

add_subdirectory (googletest-master)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#add_compile_options(-std=c++11)

include_directories(exercise)
add_subdirectory(exercise)

add_executable (${PROJECT_NAME} main.cpp)
target_link_libraries (${PROJECT_NAME} exercise gtest gmock)
