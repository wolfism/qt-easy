cmake_minimum_required(VERSION 3.14)

project(qtlibsodemo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core LinguistTools REQUIRED)

set(TS_FILES qtlibsodemo_zh_CN.ts)

add_library(qtlibsodemo SHARED
  qtlibsodemo_global.h
  qtlibsodemo.cpp
  qtlibsodemo.h
  ${TS_FILES}
)

target_link_libraries(qtlibsodemo PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(qtlibsodemo PRIVATE QTLIBSODEMO_LIBRARY)

if(COMMAND qt_create_translation)
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()
