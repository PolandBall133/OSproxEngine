#pragma once

#include "shader_identification.hpp"

#include <string>

using ShaderSource = std::string;

struct VertexShaderSource{
    ShaderSource source;
};

struct FragmentShaderSource{
    ShaderSource source;
};

struct GeometryShaderSource{
    ShaderSource source;
    static GeometryShaderSource empty();
};

//TODO: add {TessEvaluationShader, TessControlShader, ComputeShader} handling
class ShaderProgram{
private:
    ShaderProgramID pid = InvalidShaderProgramID;
protected:
    ShaderProgram() = default;
public:
    ShaderProgram(const ShaderProgram &) = default;
    ShaderProgram(ShaderProgram &&) = default;
    ShaderProgram(VertexShaderSource &&,
                  FragmentShaderSource &&,
                  GeometryShaderSource && = GeometryShaderSource::empty());
public:
    ShaderProgramID id() const;
};