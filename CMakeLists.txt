# Define the printf library
add_library(printf STATIC printf.c)

# Include the current directory for header files
target_include_directories(printf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
