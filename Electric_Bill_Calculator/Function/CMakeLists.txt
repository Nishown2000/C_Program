# Include directories for header files
include_directories(inc)

# Add source files
file(GLOB SRC "src/*.c")

# Create library target
add_library(function ${SRC})