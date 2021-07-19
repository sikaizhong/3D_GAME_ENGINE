################################################################################
cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(ByteTroop LANGUAGES CXX)


#include_directories(${CMAKE_SOURCE_DIR}/SCGAL/convexhull)
#include_directories(${CMAKE_SOURCE_DIR}/SCGAL/core)
#include_directories(${CMAKE_SOURCE_DIR}/SCGAL/Cartesian_kernel)
#include_directories(${CMAKE_SOURCE_DIR}/SCGAL/Kernel_23)
#include_directories(${CMAKE_SOURCE_DIR}/SCGAL/Filtered_kernel)




#SOURCE_GROUP (convexhull REGULAR_EXPRESSION SCGAL/ConvexHull/.*) 
#SOURCE_GROUP (core REGULAR_EXPRESSION SCGAL/core/.*) 

#SOURCE_GROUP (Cartesian_kernel REGULAR_EXPRESSION SCGAL/Cartesian_kernel/.*) 
#SOURCE_GROUP (Kernel_23 REGULAR_EXPRESSION SCGAL/Kernel_23/.*) 
#SOURCE_GROUP (Filtered_kernel REGULAR_EXPRESSION SCGAL/Filtered_kernel/.*) 




#file(GLOB_RECURSE SRC_FILES ${CMAKE_SOURCE_DIR}/SCGAL/*.cpp ${CMAKE_SOURCE_DIR}/SCGAL/*.h)

#add_library(Engeine  ${SRC_FILES})

#add_subdirectory(example/ch_graham_anderson)

#compiler stuff
IF(MSVC)
  ADD_DEFINITIONS (/D  _CRT_SECURE_NO_WARNINGS)  ## add macro
  ADD_DEFINITIONS (/D  _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING )
  ADD_DEFINITIONS (/D   GLEW_STATIC ) ## use static glew library

ENDIF()

add_subdirectory(glew)
add_subdirectory(ByteTroopMain)
add_subdirectory(Engine_imgui)
add_subdirectory(Engine_qt)
add_dependencies(Engine_imgui ByteTroopMain)
#add_dependencies(Engine_qt ByteTroopMain)

