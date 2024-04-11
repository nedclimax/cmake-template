cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 11)
project(b2a3ig CXX)

include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)

FetchContent_Declare(SDL3
	GIT_REPOSITORY "https://github.com/libsdl-org/SDL"
	GIT_TAG main
	GIT_SHALLOW  TRUE
	GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(SDL3)

# Adding our source files
file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
set(PROJECT_INCLUDE "${CMAKE_CURRENT_LIST_DIR}/src/")

# Declaring our executable
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE})
target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3)