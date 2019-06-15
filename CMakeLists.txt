cmake_minimum_required (VERSION 2.6)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)

project (Main)

find_package(Lua53 REQUIRED)
include_directories(${LUA_INCLUDE_DIR})

add_executable(Main main.cc)
target_link_libraries(Main ${LUA_LIBRARY})
