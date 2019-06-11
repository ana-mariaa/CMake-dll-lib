project(proj)

add_subdirectory("src")

source_group( "Source Files" FILES ${file})

include_directories(${LibrarieStatica_IncludeDir})

add_executable( proj ${file} )

target_link_libraries( proj LibrarieStatica )

#install(TARGETS proj RUNTIME DESTINATION bin)