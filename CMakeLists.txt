cmake_minimum_required(VERSION 3.10)
project(pokesim VERSION 0.1)

add_library(pokesim_compiler_flags INTERFACE)

target_compile_options(pokesim_compiler_flags INTERFACE
    "$<BUILD_INTERFACE:-Wall;-Wextra;-Wunused>"
)

add_library(pokesim
    pokesim_move.c
    pokesim_pokemon.c
    pokesim_team.c
)

find_package(json-c CONFIG)
target_link_libraries(pokesim PRIVATE json-c::json-c)

set(installable_libraries
    pokesim
)

set(installable_headers
    pokesim.h
    pokesim_move.h
    pokesim_pokemon.h
    pokesim_team.h
)

install(TARGETS ${installable_libraries} DESTINATION lib)
install(FILES ${installable_headers} DESTINATION include/pokesim)

# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

