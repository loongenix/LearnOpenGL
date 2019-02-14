//
// Created by jijiachun on 2019/2/3.
//

#pragma once

#include <GLFW/glfw3.h>
#include <iostream>
class DrawBase {
protected:
    unsigned int VBO;
    unsigned int shaderProgram;
    unsigned int VAO;
public:
    virtual void init() = 0;

    virtual void draw() = 0;

    virtual void destroy() = 0;
};

