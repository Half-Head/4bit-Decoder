#include <iostream>
#include <sstream>
#include <exception>

#include <Graph_lib/Graph.h>
#include <Graph_lib/Window.h>
#include <Graph_lib/Simple_window.h>
#include <Graph_lib/GUI.h>

#include "logic.h"
#include "logic_shapes.h"
#include "Logic_window.h"


int main(){
try
{
  int win_w = 1200;
  int win_h = 900;
  Graph_lib::Point lt{ Graph_lib::x_max()/2 - win_w/2, Graph_lib::y_max()/2 - win_h/2 };
  Logic_window win{ lt, win_w, win_h, "Scheme of Logic Elements" };
  win.wait_for_button();
  return 0;
}
catch (std::exception& e)
{
  std::cerr << e.what() << std::endl;
  return 1;
}
catch (...)
{
  std::cerr <<"Oops, something went wrong..."<< std::endl;
  return 2;
}
}
