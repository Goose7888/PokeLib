cmake_minimum_required(VERSION 3.10)
project(pokelib VERSION 0.1)

add_library(pokelib_compiler_flags INTERFACE)

target_compile_options(pokelib_compiler_flags INTERFACE
    "$<BUILD_INTERFACE:-Wall;-Wextra;-Wunused>"
)

add_library(pokelib
    pokelib_move.c
    pokelib_pokemon.c
    pokelib_team.c
)

find_package(json-c CONFIG)
target_link_libraries(pokelib PRIVATE json-c::json-c)

set(installable_libraries
    pokelib
)

set(installable_headers
    pokelib.h
    pokelib_move.h
    pokelib_pokemon.h
    pokelib_team.h
)

install(TARGETS ${installable_libraries} DESTINATION lib)
install(FILES ${installable_headers} DESTINATION include)

# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

