project(LibrarieStatica)

set(LibrarieStatica_IncludeDir "${CMAKE_CURRENT_SOURCE_DIR}/include" CACHE INTERNAL "")

add_subdirectory(${LibrarieStatica_IncludeDir})
add_subdirectory("src")

source_group( "Header Files" FILES ${headers})
source_group( "Source Files" FILES ${sources})

include_directories(${LibrarieStatica_IncludeDir})
				
# add_library( LibrarieStatica STATIC ${sources} 
									# ${headers})
									
add_library( LibrarieStatica SHARED ${sources} 
									${headers})		
	
add_definitions(-DLib_as_DLL)
