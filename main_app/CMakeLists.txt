project(main_app)

add_executable(main_app main.cpp)

target_link_libraries(main_app PRIVATE greeter)
target_include_directories(main_app PRIVATE ${PROJECT_SOURCE_DIR}/../greeter_lib)
