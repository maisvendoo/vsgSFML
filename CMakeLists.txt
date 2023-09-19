cmake_minimum_required(VERSION 3.7)

project(vsgSFML
		VERSION 0.0.0
		DESCRIPTION "VulkanSceneGraph-SFML Integration"
		LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(vsg 1.0.9 REQUIRED)
find_package(SFML 2.6.0 COMPONENTS system REQUIRED)
find_package(vsgXchange QUIET)

add_subdirectory(src/vsgSFML)

add_subdirectory(example)
