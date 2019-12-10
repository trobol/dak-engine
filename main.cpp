
#include<X11/Xlib.h>
 #include<stdio.h>
 #include<stdlib.h> // prevents error for exit on line 18 when compiling with gcc
 #include "Window.h"
 int main() {

   dak::Display display;
   display.Open();
   if(!display.IsOpen()) {
      printf("Cannot open display\n");
      exit(1);
   } else {
     printf("Opened Display\n");
   }
   dak::Window window(display);
printf("Created Window\n");
   window.Open();
  printf("Opened Window\n");
  //  Display *d;
  //  int s;
  //  Window w;
   XEvent e;

                        /* open connection with the server */
  //  d=XOpenDisplay(NULL);
  //  if(d==NULL) {
  //    printf("Cannot open display\n");
  //    exit(1);
  //  }
  //  s=DefaultScreen(d);

  //                       /* create window */
  //  w=XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 100, 100, 1,
  //                        BlackPixel(d, s), WhitePixel(d, s));

   // Process Window Close Event through event handler so XNextEvent does Not fail
   Atom delWindow = XInternAtom( display, "WM_DELETE_WINDOW", 0 );
   XSetWMProtocols(display , window, &delWindow, 1);

                        /* select kind of events we are interested in */
   XSelectInput(display, window, ExposureMask | KeyPressMask);

                        /* map (show) the window */
   XMapWindow(display, window);

                        /* event loop */
   while(1) {
     XNextEvent(display, &e);
                        /* draw or redraw the window */
     if(e.type==Expose) {
       XFillRectangle(display, window, DefaultGC((::Display*)display, DefaultScreen((::Display*)display)), 20, 20, 10, 10);
     }
                        /* exit on key press */
     if(e.type==KeyPress)
       break;

     // Handle Windows Close Event
     if(e.type==ClientMessage)
        break;
   }
   display.Close();
                        /* destroy our window */
  //  XDestroyWindow(d, w);

  //                       /* close connection to server */
  //  XCloseDisplay(d);

   return 0;
 }