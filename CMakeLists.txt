cmake_minimum_required(VERSION 3.13)
project(HelloOpenGL)

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(GLFW_LIBRARY "D:/Develop/msys64/mingw64/lib/libglfw3.a")
set(GLFW_INCLUDE_DIR "D:/Develop/msys64/mingw64/lib")


set_property(GLOBAL PROPERTY
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON)
file(COPY res DESTINATION ${CMAKE_BINARY_DIR})
message(${CMAKE_BINARY_DIR})
include_directories(${OPENGL_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} includes/glm)
link_libraries(${OPENGL_LIBRARIES} ${GLFW_LIBRARY})

set(BASE_SOURCEFILE main.cpp glad.c stb_image.h DrawBase.h utils/Shader.cpp utils/Shader.h)

add_executable(LearnOpenGL ${BASE_SOURCEFILE} HelloTriangle.cpp HelloTriangle.h)
add_executable(HelloShader ${BASE_SOURCEFILE} HelloShader.cpp HelloShader.h)
add_executable(HelloTexture ${BASE_SOURCEFILE} HelloTexture.cpp HelloTexture.h)
add_executable(HelloTransform ${BASE_SOURCEFILE} HelloTransform.cpp HelloTransform.h)
add_executable(Hello3D ${BASE_SOURCEFILE} Hello3D.cpp Hello3D.h)


