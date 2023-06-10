# Include directories for header files
include_directories(inc)

# Add source files
file(GLOB SRC "src/*.c")

# Create executable target
add_executable(main ${SRC})

target_link_libraries(main function)