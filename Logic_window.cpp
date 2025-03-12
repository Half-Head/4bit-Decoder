#include "Logic_window.h"

Logic_window :: Logic_window(Graph_lib::Point xy, int w, int h, const std::string& title): Graph_lib::Window{xy, w, h, title},
    scheme{ Graph_lib::Point{1000000, 100}, w - 80, h - 10 },
    button0 {Graph_lib::Point(30, 40), 40, 30, "on/off", cb_invert0}, 
    button1 {Graph_lib::Point(30, 265), 40, 30, "on/off", cb_invert1}, 
    button2 {Graph_lib::Point(30, 490), 40, 30, "on/off", cb_invert2}, 
    button3 {Graph_lib::Point(30, 677.5), 40, 30, "on/off", cb_invert3} {
    using namespace Logic;

    attach(button0);
    attach(button1);
    attach(button2);
    attach(button3);

    int win_w = w;
    int win_h = h;

  //
  And and1;
  And and2;
  And and3;
  And and4;
  And and5;
  And and6;
  And and7;
  And and8;
  And and9;
  And and10;
  And and11;
  And and12;
  And and13;
  And and14;
  And and15;
  And and16;
  // подключение
  src0 >> ~and1;
  src1 >> ~and1;
  src2 >> ~and1;
  src3 >> ~and1;

  src0 >> ~and2;
  src1 >> ~and2;
  src2 >> ~and2;
  src3 >> and2;

  src0 >> ~and3;
  src1 >> ~and3;
  src2 >>  and3;
  src3 >> ~and3;
  
  src0 >> ~and4;
  src1 >> ~and4;
  src2 >>  and4;
  src3 >>  and4;

  src0 >> ~and5;
  src1 >>  and5;
  src2 >> ~and5;
  src3 >> ~and5;

  src0 >> ~and6;
  src1 >>  and6;
  src2 >> ~and6;
  src3 >>  and6;

  src0 >> ~and7;
  src1 >>  and7;
  src2 >>  and7;
  src3 >> ~and7;

  src0 >> ~and8;
  src1 >>  and8;
  src2 >>  and8;
  src3 >>  and8;

  src0 >>  and9;
  src1 >> ~and9;
  src2 >> ~and9;
  src3 >> ~and9;

  src0 >>  and10;
  src1 >> ~and10;
  src2 >> ~and10;
  src3 >>  and10;

  src0 >>  and11;
  src1 >> ~and11;
  src2 >>  and11;
  src3 >> ~and11;

  src0 >>  and12;
  src1 >> ~and12;
  src2 >>  and12;
  src3 >>  and12;

  src0 >>  and13;
  src1 >>  and13;
  src2 >> ~and13;
  src3 >> ~and13;

  src0 >>  and14;
  src1 >>  and14;
  src2 >> ~and14;
  src3 >>  and14;

  src0 >>  and15;
  src1 >>  and15;
  src2 >>  and15;
  src3 >> ~and15;

  src0 >>  and16;
  src1 >>  and16;
  src2 >>  and16;
  src3 >>  and16;

  //
    
  attach(scheme);      

  auto column_x = [] (double c) -> int
  {
    return int(30 + 100 * c);
  };

  auto line_y = [] (double l) -> int
  {
    return int(40 + 75 * l);
  };

  SourceShape src_shape0{ scheme, src0, "src0", Graph_lib::Point{ column_x(0), line_y(0) } };
  SourceShape src_shape1{ scheme, src1, "src1", Graph_lib::Point{ column_x(0), line_y(3) } };
  SourceShape src_shape2{ scheme, src2, "src2", Graph_lib::Point{ column_x(0), line_y(6) } };
  SourceShape src_shape3{ scheme, src3, "src3", Graph_lib::Point{ column_x(0), line_y(8.5) } };
  
  

  AndShape and_shape1{ scheme, and1, "and1", Graph_lib::Point{ column_x(4), line_y(0) } };
  AndShape and_shape2{ scheme, and2, "and2", Graph_lib::Point{ column_x(4), line_y(1.5)} };
  AndShape and_shape3{ scheme, and3, "and3", Graph_lib::Point{ column_x(4), line_y(3)} };
  AndShape and_shape4{ scheme, and4, "and4", Graph_lib::Point{ column_x(4), line_y(4.5)} };
  AndShape and_shape5{ scheme, and5, "and5", Graph_lib::Point{ column_x(4), line_y(6)}};
  AndShape and_shape6{ scheme, and6, "and6", Graph_lib::Point{ column_x(4), line_y(7.5) } };
  AndShape and_shape7{ scheme, and7, "and7", Graph_lib::Point{ column_x(4), line_y(8.5)} };

  AndShape and_shape8{ scheme, and8, "and8", Graph_lib::Point{    column_x(7), line_y(0.5)} };
  AndShape and_shape9{ scheme, and9, "and9", Graph_lib::Point{    column_x(7), line_y(2)} };
  AndShape and_shape10{ scheme, and10, "and10", Graph_lib::Point{ column_x(7), line_y(3.5)} };
  AndShape and_shape11{ scheme, and11, "and11", Graph_lib::Point{ column_x(7), line_y(5)} };
  AndShape and_shape12{ scheme, and12, "and12", Graph_lib::Point{  column_x(7), line_y(6.5)} };
  AndShape and_shape13{ scheme, and13, "and13", Graph_lib::Point{ column_x(7), line_y(8)} };

  AndShape and_shape14{ scheme, and14, "and14", Graph_lib::Point{ column_x(10), line_y(3)} };
  AndShape and_shape15{ scheme, and15, "and15", Graph_lib::Point{ column_x(10), line_y(5)} };
  AndShape and_shape16{ scheme, and16, "and16", Graph_lib::Point{ column_x(10), line_y(7)} };

  scheme.update_connections();
  wait_for_button();
}

void Logic_window :: invert0() { 
    src0 = !src0;
    button_pushed = true;
    scheme.update_connections();
    wait_for_button();
}
void Logic_window :: invert1() { 
    src1 = !src1;
    button_pushed = true;
    scheme.update_connections();
    wait_for_button();
}
void Logic_window :: invert2() { 
    src2 = !src2;
    button_pushed = true;
    scheme.update_connections();
    wait_for_button();
}
void Logic_window :: invert3() { 
    src3 = !src3;
    button_pushed = true;
    scheme.update_connections();
    wait_for_button();
}

void Logic_window :: cb_invert0(Graph_lib::Address, Graph_lib::Address adr) {
    Logic_window* l_win = static_cast<Logic_window*>(adr);
    l_win->invert0();
}


void Logic_window :: cb_invert1(Graph_lib::Address, Graph_lib::Address adr) {
    Logic_window* l_win = static_cast<Logic_window*>(adr);
    l_win -> invert1();
}


void Logic_window :: cb_invert2(Graph_lib::Address, Graph_lib::Address adr) {
    Logic_window* l_win = static_cast<Logic_window*>(adr);
    l_win -> invert2();
}

void Logic_window :: cb_invert3(Graph_lib::Address, Graph_lib::Address adr) {
    Logic_window* l_win = static_cast<Logic_window*>(adr);
    l_win ->invert3();
}