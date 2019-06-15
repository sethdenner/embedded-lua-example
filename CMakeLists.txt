cmake_minimum_required (VERSION 2.6)
project (Main)

find_package(Lua53 REQUIRED)
include_directories(${LUA_INCLUDE_DIR})

add_executable(Main main.cc)
target_link_libraries(Main ${LUA_LIBRARY})
