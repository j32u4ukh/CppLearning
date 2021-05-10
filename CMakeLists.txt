cmake_minimum_required(VERSION 3.0.0)

project(CppLearning VERSION 0.1.0)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_RELEASE  "-std=c++11 -O3 -fopenmp -pthread")

include(CTest)
enable_testing()

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include") 
# file(GLOB TARGET_SRC "./src/*.cpp" )

add_executable(main "./src/main.cpp")

add_executable(leetcode "./src/leetcode.cpp" "./src/leetcode/*.cpp")

# add_library(lib_leetcode "./lib/leetcode/")
# target_link_libraries(leetcode libleetcode)
# Add source files into leetcode.exe "./src/leetcode/*.cpp"


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
