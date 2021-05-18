file(GLOB SOURCES ./*.c)

add_executable(simulateur ${SOURCES} solution_c_bas_niveau.c)
target_include_directories(simulateur PUBLIC ${CMAKE_CURRENT_LIST_DIR})
include_directories("${PROJECT_SOURCE_DIR}/include/")
