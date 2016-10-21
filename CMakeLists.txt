cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# Hunter Dependency Manger
# https://docs.hunter.sh/en/latest/quick-start.html
include("cmake/HunterGate.cmake")
HunterGate(
        # https://github.com/ruslo/hunter/releases
        URL "https://github.com/ruslo/hunter/archive/v0.16.12.tar.gz"
        SHA1 "5621e35c95d0b34b9771522f19ff1a5ba007d09e"
)

project(DictionaryPath VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")


# Add Poco package
# https://github.com/ruslo/hunter/wiki/pkg.pococpp
hunter_add_package(PocoCpp)
find_package(Poco REQUIRED Foundation CONFIG)
