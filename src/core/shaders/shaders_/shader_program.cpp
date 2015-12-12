#include "core/shaders/shaders_/shader_program.hpp"

GeometryShaderSource GeometryShaderSource::empty()
{ return { "" }; }

namespace{

void compile_shader_from_source(
    GLuint &shader_id,
    const ShaderSource &source,
    const GLenum shader_type)
{
    //todo;
}

}

ShaderProgram::ShaderProgram(
    VertexShaderSource    &&vertex_shader_source,
    FragmentShaderSource  &&fragment_shader_source,
    GeometryShaderSource  &&geometry_shader_source
){
    GLuint vertex_shader, fragment_shader, geometry_shader;
    //todo;
}

ShaderProgramID ShaderProgram::id() const
{ return pid; }