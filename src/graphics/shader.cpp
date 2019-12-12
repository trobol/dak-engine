#include "shader.h"

#include <fstream>
#include "iostream"

namespace dak
{
namespace graphics
{
#include <windows.h>

char *LoadFile(std::string path)
{
	std::ifstream in(path);

	if (in)
	{
		const std::string contents((std::istreambuf_iterator<char>(in)),
								   std::istreambuf_iterator<char>());
		int size = contents.length() + 1;
		char *c = new char[size];
		const char *output = contents.c_str();
		for (int i = 0; i < size; i++)
		{
			c[i] = output[i];
		}
		return c;
	}
	return nullptr;
}

void Shader::use()
{
	glUseProgram(m_ID);
}
Shader::Shader(std::string vertPath, std::string fragPath)
{

	//Build vert shader

	unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
	char *vertexShaderSource = LoadFile(vertPath);

	if (vertexShaderSource == nullptr)
	{
		std::cout << "failed to load vertex shader: " << vertPath << std::endl;
	}
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);

	int success;
	char infoLog[512];
	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
		std::cout << "GL Error: " << infoLog << std::endl;
	}

	//Build frag shader

	unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	char *fragmentShaderSource = LoadFile(fragPath);
	if (vertexShaderSource == nullptr)
	{
		std::cout << "failed to load fragment shader: " << fragPath << std::endl;
	}

	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);

	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
		std::cout << "GL Error: " << infoLog << std::endl;
	}

	unsigned int ID = glCreateProgram();

	glAttachShader(ID, vertexShader);
	glAttachShader(ID, fragmentShader);

	glLinkProgram(ID);

	glGetProgramiv(ID, GL_LINK_STATUS, &success);
	if (!success)
	{
		glGetProgramInfoLog(ID, 512, NULL, infoLog);
		std::cout << "GL Error: " << infoLog << std::endl;
	}

	unsigned int matricesIndex = glGetUniformBlockIndex(ID, "Matrices");
	glUniformBlockBinding(ID, matricesIndex, 0);

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);
	m_ID = ID;
}

GLuint Shader::getUniform(const char name[])
{
	return glGetUniformLocation(m_ID, name);
}
} // namespace graphics
} // namespace dak