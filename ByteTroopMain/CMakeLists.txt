file( GLOB SRCS *.cpp *.h )
add_library(ByteTroopMain ${SRCS})

target_include_directories(ByteTroopMain  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})