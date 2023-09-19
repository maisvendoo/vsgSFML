set(HEADERS
	${CMAKE_SOURCE_DIR}/include/vsgSFML/export.hpp
	${CMAKE_SOURCE_DIR}/include/vsgSFML/keyboard.hpp
	${CMAKE_SOURCE_DIR}/include/vsgSFML/mouse.hpp
	${CMAKE_SOURCE_DIR}/include/vsgSFML/version.hpp
	${CMAKE_SOURCE_DIR}/include/vsgSFML/window.hpp)

set(SOURCES
        ${CMAKE_SOURCE_DIR}/src/vsgSFML/export.cpp
        ${CMAKE_SOURCE_DIR}/src/vsgSFML/keyboard.cpp
        ${CMAKE_SOURCE_DIR}/src/vsgSFML/mouse.cpp
        ${CMAKE_SOURCE_DIR}/src/vsgSFML/version.cpp
        ${CMAKE_SOURCE_DIR}/src/vsgSFML/window.cpp)


add_library(vsgSFML ${HEADERS} ${SOURCES})

set_property(TARGET vsgSFML PROPERTY POSITION_INDEPENDENT_CODE ON)	
set_property(TARGET vsgSFML PROPERTY CXX_STANDARD 17)

target_include_directories(vsgSFML PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_SOURCE_DER}/include>
                           $<INSTALL_INTERFACE:include>
                       )

target_link_libraries(vsgSFML
                      vsg::vsg
                  )


install(TARGETS vsgSFML
	DESTINATION lib
	)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/vsgSFML
        DESTINATION include
        )
