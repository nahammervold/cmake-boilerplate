cmake_minimum_required (VERSION 3.5)

#Procject name
project (HelloWorld)

set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (VERSION_PATCH 0)

configure_file (
	"src/HelloWorldConfig.h.in"
	"include/HelloWorldConfig.h"
)

include_directories("src/fizzbuzz")
include_directories("${PROJECT_BINARY_DIR}/include")
file(GLOB SRCS src/*.cpp src/**/*.cpp src/*.h src/**/*.h)
add_executable(HelloWorld ${SRCS})
