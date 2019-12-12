#include "texture.h"
#include <fstream>
#include <iostream>
#include <cstdio>
namespace dak
{
namespace graphics
{

Texture LoadBitMap(const char *path)
{
	// Open the file
	FILE *file = fopen(path, "rb");
	if (!file)
	{
		std::cout << "Image could not be opened" << std::endl;
	}
	// Data read from the header of the BMP file
	unsigned char header[54]; // Each BMP file begins by a 54-bytes header
	unsigned int dataPos;	 // Position in the file where the actual data begins
	unsigned int width, height;
	unsigned int imageSize; // = width*height*3
	// Actual RGB data
	unsigned char *data;
	if (fread(header, 1, 54, file) != 54)
	{
		std::cout << "Not a correct BMP file, failed to read file" << std::endl;
		for (int i = 0; i < 54; i++)
		{
			std::cout << (unsigned int)header[i] << std::endl;
		}
	}

	if (header[0] != 'B' || header[1] != 'M')
	{
		std::cout << "Not a correct BMP file, wrong headers" << std::endl;
	}

	// Read ints from the byte array
	dataPos = *(int *)&(header[0x0A]);
	imageSize = *(int *)&(header[0x22]);
	width = *(int *)&(header[0x12]);
	height = *(int *)&(header[0x16]);

	// Some BMP files are misformatted, guess missing information
	if (imageSize == 0)
		imageSize = width * height * 3; // 3 : one byte for each Red, Green and Blue component
	if (dataPos == 0)
		dataPos = 54; // The BMP header is done that way

	// Create a buffer
	data = new unsigned char[imageSize];

	// Read the actual data from the file into the buffer
	fread(data, 1, imageSize, file);

	//Everything is in memory now, the file can be closed
	fclose(file);

	// Create one OpenGL texture
	GLuint textureID;
	glGenTextures(1, &textureID);

	// "Bind" the newly created texture : all future texture functions will modify this texture
	glBindTexture(GL_TEXTURE_2D, textureID);

	// Give the image to OpenGL
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, data);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	return Texture(width, height, textureID);
}

Texture Texture::Load(const char *path)
{
	//for now just load bmp file
	return LoadBitMap(path);
}

Texture::Texture(unsigned int width, unsigned int height, unsigned int ID)
{
	m_width = width;
	m_height = height;
	m_ID = ID;
}

} // namespace graphics
} // namespace dak
