#ifndef DAK_SYSTEM_ENGINE
#define DAK_SYSTEM_ENGINE

#include "../util/singleton.h"

namespace dak
{
namespace system
{

class Input;
class Window;
class Engine : public util::Singleton<Engine>
{
public:
	Input *m_input;
	Window *m_window;
};

} // namespace system
} // namespace dak

#endif