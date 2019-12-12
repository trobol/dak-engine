#include "window.h"
#include <iostream>

#include "engine.h"
#include "input.h"

namespace dak::system
{

void Window::open()
{
	if (!glfwInit())
	{
		std::cout << "Failed to initialize GLFW" << std::endl;
		exit(1);
	}
	m_window = glfwCreateWindow(1024, 768, "Tutorial 01", NULL, NULL);
	if (m_window == nullptr)
	{
		std::cout << "Failed to open window" << std::endl;
		glfwTerminate();
		exit(1);
	}
	Input::instance().initialize(m_window);

	glfwMakeContextCurrent(m_window);
}
void Window::close()
{
	if (m_window)
	{
		glfwDestroyWindow(m_window);
		m_window = nullptr;
	}
}
Window::~Window()
{
	close();
}
} // namespace dak::system