#include "input.h"
#include "engine.h"

#include <GLFW/glfw3.h>
namespace dak
{
namespace system
{

void Input::initialize(GLFWwindow *window)
{
	glfwSetKeyCallback(window, Input::key_callback);
}

void Input::key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
}

} // namespace system
} // namespace dak