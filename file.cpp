#include "Simple_window.h"
#include "Graph.h"

int main(){
	using namespace Graph_lib; 
	
	Point tl {100,100}; 
	
	Simple_window win {tl,600,400,"My window"}; 
	
	Axis xa {Axis::x, Point{20,300}, 280, 10, "x axis"};
	
	win.attach(xa);
	win.set_label("My window #2");
	win.wait_for_button();
	
	Axis ya {Axis::y, Point{20,300},280, 20, "y axis"};
	ya.set_color(Color::cyan);
	ya.label.set_color(Color::dark_red);
	win.attach(ya);
	win.set_label("My window #3");
	win.wait_for_button();
	
	Function sine {sin, 0, 200, Point{20,150},1000,50,50};
	win.attach(sine);
	win.set_label("My winodow #4");
	win.wait_for_button();
	
	Polygon poly; 
	
	poly.add(Point{300,200}); 
	
	poly.add(Point{350,100}); 
	
	poly.add(Point{400,235}); 
	
	poly.set_color(Color::red); 
	
	win.attach (poly); 
	win.set_label("My window #5");
	win.wait_for_button();
	
	Rectangle r {Point{200,200}, 100, 100};
	r.set_fill_color(Color::red);
	win.attach(r);
	win.set_label("My window #6");
	win.wait_for_button();
	
	Closed_polyline poly_rect;
	poly_rect.add(Point{100,50});
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{100,100});
	poly_rect.add(Point{50,75});
	poly_rect.set_style(Line_style(Line_style::dash,4));
	poly_rect.set_fill_color(Color::blue);
	win.attach(poly_rect);
	win.set_label("My window #7");
	win.wait_for_button();
	
	Text t {Point{150,150}, "Hello, graphical world!"};
	t.set_font(Font::times_bold);
	t.set_font_size(30);
	win.attach(t);
	win.set_label("My window #8");
	win.wait_for_button();
	
	Image ii {Point{300,150},"canny.jpeg"};
	win.attach(ii);
	win.set_label("My windwo #10");
	win.wait_for_button();
	
	
	ii.move(100,200);
	win.set_label("My window #11");
	win.wait_for_button();
	
	
	
	
	
	
	
	
	
	
	
	
	
}
