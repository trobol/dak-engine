#ifndef DAK_SYSTEM_INPUT_H
#define DAK_SYSTEM_INPUT_H
#include "../util/singleton.h"
#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
namespace dak
{
namespace system
{
class Input : public util::Singleton<Input>
{
public:
protected:
private:
	static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);
	void initialize(GLFWwindow *window);
	friend class Window;
};

} // namespace system
} // namespace dak

#endif