cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

add_executable(PocoFormatExample main.cpp)
target_link_libraries(PocoFormatExample Poco::Foundation)
