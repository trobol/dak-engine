#ifndef DAK_GRAPHICS_SHADER_H
#define DAK_GRAPHICS_SHADER_H
#include "../util/no_copy.h"
#include "gl_lite.h"
#include <string>
namespace dak
{
namespace graphics
{

class Shader
{
public:
	Shader(std::string vertPath, std::string fragPath);
	GLuint getUniform(const char name[]);
	void use();

private:
	unsigned int m_ID = 0;
};
} // namespace graphics
} // namespace dak

#endif