cmake_minimum_required(VERSION 2.8.9)
project (statemachine)
#change on lakanlapp
SET(CMAKE_CXX_FLAGS "-std=c++11")

#headers
include_directories(include)

#hm
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)


file(GLOB SOURCES "src/*.cpp")

#SOURCES är en variabel med alla namn på *.cpp 
add_executable(main ${SOURCES})

include_directories(include ${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS}) 

target_link_libraries(main ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})
