cmake_minimum_required(VERSION 3.1)

# Name your project
project(CmakeExample)

# Create a variable called 'SOURCES' which handles all the .cpp files
set(SOURCES
    main.cpp
    src/User.cpp)

# Create a variable called 'HEADERS' which handles all the .h files
set(HEADERS
    include/User.h)

# Compile the project into an executable called 'main' using the SOURCES and the HEADERS
add_executable(main ${SOURCES} ${HEADERS})
