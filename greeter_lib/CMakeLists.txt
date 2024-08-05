project(greeter_lib)

add_library(greeter STATIC Greeter.cpp)

target_include_directories(greeter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
