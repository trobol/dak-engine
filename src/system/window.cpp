#include "Window.h"
#include<stdio.h>
#include<stdlib.h> 

namespace dak {

Window::Window(dak::Display& d) : m_display(d) {

}
#ifdef win32 


#else


Window::~Window() {
	if(m_open) {
		Close();
	}
	if(m_display.IsOpen())
		XDestroyWindow(m_display, m_window);
}

void Window::Close() {

}


bool Window::Open() {
	if(!m_display.IsOpen())
		m_display.Open();
	int s =  DefaultScreen((::Display*)m_display);
	int blackColor = BlackPixel((::Display*)m_display, s);
	int whiteColor = WhitePixel((::Display*)m_display, s);
	int rootWindow = XRootWindow((::Display*)m_display, s);
	m_window=XCreateSimpleWindow((::Display*)m_display, RootWindow((::Display*)m_display, s), 10, 10, 100, 100, 1,
                         BlackPixel((::Display*)m_display, s), WhitePixel((::Display*)m_display, s));
	//m_window = XCreateSimpleWindow((::Display*)m_display, rootWindow, 10, 10, 100, 100, 1, blackColor, whiteColor);
	m_open = true;
	return true;
}

Window:: operator ::Window() {
	return m_window;
}



#endif
}