cmake_minimum_required(VERSION 3.1)

project(CmakeExample)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    main.cpp
    src/User.cpp)

set(HEADERS
    include/User.h)

add_executable(main ${SOURCES} ${HEADERS})
