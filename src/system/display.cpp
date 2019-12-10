#include "display.h"
#include <iostream>
namespace dak {


#ifdef win32

#else
Display::Display() {
	std::cout << "created display" << std::endl;
}
Display::~Display() {
	if(m_open)
		Close();
}

bool Display::Open() {
	std::cout << "open display" << std::endl;
	m_display = XOpenDisplay(NULL);
	m_open = m_display != NULL;
	return m_open;
}


void Display::Close() {
	XCloseDisplay(m_display);
	m_display = nullptr;
	m_open = false;
}

bool Display::IsOpen() {
	
	return m_open;
}

Display::operator ::Display*() { return m_display; }

#endif

}