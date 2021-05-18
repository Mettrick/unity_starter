file(GLOB SOURCES ./*.c ../src/decoder.c)

add_subdirectory(unity)
add_executable(test ${SOURCES})
target_link_libraries(test unity)
include_directories("${PROJECT_SOURCE_DIR}/include/" "${PROJECT_SOURCE_DIR}/test/unity")
