//
// Created by jijiachun on 2019/2/12.
//

#pragma once

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    unsigned int ID;

    void Load(const GLchar *vertexPath, const GLchar *fragmenPath);

    Shader();

    void use();

    void setBool(const std::string &name, bool value) const;

    void setInt(const std::string &name, int value) const;

    void setFloat(const std::string &name, float value) const;

    void setMatrix4fv(const std::string &name, float *value) const;

private:
    void checkCompileErrors(unsigned int shader, std::string type);
};

