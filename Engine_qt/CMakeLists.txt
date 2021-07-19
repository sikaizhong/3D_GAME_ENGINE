# Create library
find_package(Qt5Core QUIET REQUIRED)
find_package(Qt5Gui QUIET REQUIRED)
find_package(Qt5Widgets QUIET REQUIRED)
find_package(Qt5OpenGL QUIET REQUIRED)

qt5_wrap_cpp(MOCED_FILES ${MOC_FILES})
source_group("MOC Files" FILES ${MOCED_FILES})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


# Qt resources
set(QRC_SOURCE_FILES "resource/Turbo.qrc")
qt5_add_resources(QRC_FILES ${QRC_SOURCE_FILES})

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR})
#######################bin folder############################################
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#######################bin folder############################################
add_executable(Engine_qt_main Engine_qt_main.cpp )
target_link_libraries(Engine_qt_main
PUBLIC
Qt5::Widgets Qt5::Core  Qt5::OpenGL Qt5::Gui
)

  #qt_imgui_widgets glew ${OPENGL_LIBRARY}