cmake_minimum_required(VERSION 2.8.9)
project (statemachine)


#headers
include_directories(include)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB SOURCES "src/*.cpp")

#SOURCES är en variabel med alla namn på *.cpp 
add_executable(main ${SOURCES})


target_link_libraries(main ${SDL2_LIBRARIES})