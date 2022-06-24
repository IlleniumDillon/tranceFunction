project(CMakeTemplate)
include_directories(include/)
file(GLOB_RECURSE TF_LIB_SRC
        src/*.c
        )
add_library(tf STATIC ${TF_LIB_SRC})
add_executable(demo example/main.c)
target_link_libraries(demo tf)