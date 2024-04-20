cmake_minimum_required(VERSION 3.29)

project(QuickFile C)
set(CMAKE_C_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.c")
file(GLOB_RECURSE HEADERS "src/*.h")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

add_subdirectory(dependencies/Win32Gui)

target_include_directories(${PROJECT_NAME} PRIVATE dependencies/Win32Gui/include/)
target_link_libraries(${PROJECT_NAME} PRIVATE Win32Gui)

message("List of src files (SOURCES):")
foreach(FILE ${SOURCES})
    message("\t${FILE}")
endforeach()

message("List of src files (HEADERS):")
foreach(FILE ${HEADERS})
    message("\t${FILE}")
endforeach()