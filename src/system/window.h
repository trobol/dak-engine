#ifndef DAK_WINDOW_H
#define DAK_WINDOW_H
#include "../util/singleton.h"

#include <GLFW/glfw3.h>

namespace dak::system
{

class Window : public util::Singleton<Window>
{
public:
	~Window();
	void open();
	void close();
	GLFWwindow *m_window;

private:
}; // namespace system
} // namespace dak::system

#endif