file( GLOB SRCS *.cpp *.h )
add_executable(Engine_imgui Engine_imgui_main.cpp ${SRCS})
target_link_libraries(Engine_imgui
PUBLIC
ByteTroopMain
)
target_include_directories(Engine_imgui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

  #qt_imgui_widgets glew ${OPENGL_LIBRARY}