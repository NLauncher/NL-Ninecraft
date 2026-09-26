cmake_minimum_required (VERSION 3.5...3.31)

project(ninecraft-core LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS src/*.c)

add_executable(ninecraft ${SOURCE_FILES} ../stb/stb_vorbis.c)
target_include_directories(ninecraft PUBLIC include/)

if(MSVC)
    target_compile_definitions(ninecraft PRIVATE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_WARNINGS)
endif()

if(WIN32)
    target_link_libraries(ninecraft opengl32 ws2_32 winmm imm32 version setupapi user32 gdi32 shell32 advapi32 ole32 oleaut32)
endif()

target_link_libraries(ninecraft ${CMAKE_DL_LIBS} zlibstatic SDL2::SDL2 SDL2main glad ancmp anjni)
include_directories(ninecraft PUBLIC include/)
