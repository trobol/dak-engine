#ifndef DAK_SYSTEM_WINDOW_H
#define DAK_SYSTEM_WINDOW_H
#include <X11/Xlib.h>
#include "display.h"
#include <stdlib.h>
namespace dak {
    class Window {
        public:
        enum Mode {
            Fullscreen

        };
        Window(dak::Display& d);
        ~Window();
        bool Open();
        bool isOpen();
        void Close();
        private:
        bool m_open;
        #ifdef win32

        #else
            dak::Display& m_display;
            ::Window m_window;
          
            public:
            operator ::Window();
        #endif
    };
}

#endif