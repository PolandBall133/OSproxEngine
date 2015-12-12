#pragma once

extern "C" {
    #define GLEW_STATIC
    #include <GL/glew.h>
}

#include <GL/GLU.h>
#include "GL/gl.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp> 

#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_opengl.h"
