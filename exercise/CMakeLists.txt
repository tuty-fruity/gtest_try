set(PROJECT_NAME exercise)
project(${PROJECT_NAME})

file(GLOB HEADERS *.h *.hpp)
file(GLOB SOURCES *.c *.cpp)

add_library(${PROJECT_NAME}
            ${HEADERS}
            ${SOURCES})
