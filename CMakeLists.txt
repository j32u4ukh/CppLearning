cmake_minimum_required(VERSION 3.0.0)

project(CppLearning VERSION 0.1.0)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_RELEASE  "-std=c++11 -O3 -fopenmp -pthread")

include(CTest)
enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include) 
# file(GLOB TARGET_SRC "./src/*.cpp" )

file(GLOB MAIN_SRC CONFIGURE_DEPENDS "./src/*.cpp" )
file(GLOB MAIN_SRC_UTILS CONFIGURE_DEPENDS "./src/utils/*.cpp" )
add_executable(main "./src/main.cpp" ${MAIN_SRC} ${MAIN_SRC_UTILS})

# file(GLOB LEETCODE_SRC CONFIGURE_DEPENDS "./src/*.cpp" )
file(GLOB LEETCODE_SRC_LEETCODE CONFIGURE_DEPENDS "./src/leetcode/*.cpp" )
file(GLOB LEETCODE_SRC_UTILS CONFIGURE_DEPENDS "./src/utils/*.cpp" )
add_executable(leetcode "./src/leetcode/leetcode.cpp" ${LEETCODE_SRC_LEETCODE} ${LEETCODE_SRC_UTILS})

# add_library(lib_leetcode "./lib/leetcode/")
# target_link_libraries(leetcode libleetcode)
# Add source files into leetcode.exe "./src/leetcode/*.cpp"


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
