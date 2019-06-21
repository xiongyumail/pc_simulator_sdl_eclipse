cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH bin) 

file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lv_examples/*.c"  "lvgl/*.c" )

add_definitions(-DLV_CONF_INCLUDE_SIMPLE)
find_package(SDL2 REQUIRED SDL2)
include_directories(${SDL2_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/lvgl)
add_executable(main main.c gui.c seg_font.c my_symbol.c mouse_cursor_icon.c ${SOURCES})
target_link_libraries(main PRIVATE SDL2)
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
