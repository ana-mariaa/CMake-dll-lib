#CMakeLists.txt 

cmake_minimum_required(VERSION 3.8)

project(Project)

if(CMAKE_CL_64)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build/bin/X86)
else(CMAKE_CL_64)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build/bin/X64)
endif(CMAKE_CL_64)

# FUNCTION( notatie MY_SOURCES )
  # FOREACH( MY_SOURCE ${${MY_SOURCES}} )
    # SET( MODIFIED ${MODIFIED} ${CMAKE_CURRENT_SOURCE_DIR}/${MY_SOURCE} )
  # ENDFOREACH()
  # SET( ${MY_SOURCES} ${MODIFIED} PARENT_SCOPE )
# ENDFUNCTION()

include(${CMAKE_CURRENT_SOURCE_DIR}/../Utils.cmake)

add_subdirectory(LibrarieStatica)
add_subdirectory(proj)

add_dependencies(proj LibrarieStatica)		