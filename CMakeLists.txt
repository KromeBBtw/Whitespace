# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(whitespace_exam VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# add a library for your functions
add_library(dev_library STATIC
    src/developer.c
    src/developer_group.c)

# add the includes to the library
target_include_directories(dev_library PUBLIC include)

# add an executabel and assign files to it
add_executable(main_exec src/main.c)

# add the include directories
target_include_directories(main_exec PRIVATE include)
# link your library
target_link_libraries(main_exec PRIVATE dev_library)