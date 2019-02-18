cmake_minimum_required( VERSION 3.1 )
project(tinygltf_bug_reproduction VERSION 0.1
        DESCRIPTION "Reproduce a preprocessor related bug on windows"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory( external )
# include( external/bgfx.cmake/cmake/util/ConfigureDebugging.cmake )


add_executable( bug_repro main.cpp  )
target_link_libraries( bug_repro PUBLIC tinygltf bgfx)

