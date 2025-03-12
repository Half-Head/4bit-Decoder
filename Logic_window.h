#ifndef WINDOW
#define WINDOW

#include <iostream>
#include <sstream>
#include <exception>

#include <Graph_lib/Graph.h>
#include <Graph_lib/Window.h>
#include <Graph_lib/Simple_window.h>
#include <Graph_lib/GUI.h>

#include "logic.h"
#include "logic_shapes.h"

class Logic_window : public Graph_lib::Window{
    public:
    Logic_window(Graph_lib::Point xy, int w, int h, const std::string& title);

    void wait_for_button(){
        while (!button_pushed && Fl::wait());
        button_pushed = false;
        Fl::redraw();
    }

    private:
    bool button_pushed{false};

    Logic::SchemeShape scheme;

    Logic :: Source src0;
    Logic :: Source src1;
    Logic :: Source src2;
    Logic :: Source src3;

    Graph_lib::Button button0;
    Graph_lib::Button button1;
    Graph_lib::Button button2;
    Graph_lib::Button button3;

    void invert0();
    void invert1();
    void invert2();
    void invert3();

    static void cb_invert0(Graph_lib::Address, Graph_lib::Address adr);
    static void cb_invert1(Graph_lib::Address, Graph_lib::Address adr);
    static void cb_invert2(Graph_lib::Address, Graph_lib::Address adr);
    static void cb_invert3(Graph_lib::Address, Graph_lib::Address adr);

};


#endif