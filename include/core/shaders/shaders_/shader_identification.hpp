#pragma once

#include "core/opengl/opengl.hpp"

#include <limits>

using ShaderProgramID = GLuint;

constexpr static ShaderProgramID InvalidShaderProgramID
    = std::numeric_limits<ShaderProgramID>::max();