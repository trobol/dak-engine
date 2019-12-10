#ifndef DAK_SYSTEM_DISPLAY_H
#define DAK_SYSTEM_DISPLAY_H

#include <X11/Xlib.h>
namespace dak {
    class Display {
        public:
            Display();
            ~Display();
            bool Open();
            bool IsOpen();
            void Close();
        private:
            bool m_open = false;
        #ifdef win32

        #else

            ::Display* m_display;
        public:
            operator ::Display*();
        #endif
    };
}

#endif