cmake_minimum_required(VERSION 3.1)

# Name your project
project(CmakeExample)

# Create a variable called 'SOURCES' which handles all the .cpp files
file(GLOB SOURCES "src/*.cpp")

# Compile the project into an executable called 'main' using the SOURCES
add_executable(main ${SOURCES})
