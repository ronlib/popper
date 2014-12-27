cmake_minimum_required(VERSION 2.8)

project(popper)

# adding Qt necessary includes
find_package(Qt4)
include_directories(${QT_INCLUDES})

# setting preferences
set(CMAKE_VERBOSE_MAKEFILE on)

set(${PROJECT_NAME}_SOURCES main.cpp)

# adding executable to the targets
add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})

set(LIBPOPPER_BINARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../libpopper/${CMAKE_BUILD_TYPE}")
set(LIBPOPPER_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../libpopper/sources")

# adding necessary QT include directories
include_directories(${LIBPOPPER_SOURCE_DIR})
find_library(LIBPOPPER_LIBRARY popper ${LIBPOPPER_BINARY_DIR})
target_link_libraries(${PROJECT_NAME} ${LIBPOPPER_LIBRARY})

# qt
target_link_libraries(${PROJECT_NAME} ${QT_QTGUI_LIBRARIES})
