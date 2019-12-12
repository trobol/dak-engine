#ifndef DAK_GRAPHICS_H
#define DAK_GRAPHICS_H

#include <string>
#include "gl_lite.h"

namespace dak
{
namespace graphics
{
class Texture
{
public:
	Texture(unsigned int width, unsigned int height, unsigned int ID);
	static Texture Load(const char *path);
	operator GLuint() { return m_ID; }

private:
	GLuint m_ID = 0;
	unsigned int m_width = 0;
	unsigned int m_height = 0;
};
} // namespace graphics
} // namespace dak

#endif