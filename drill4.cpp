#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

double one(double) { return 1; }

double slope(double x) { return x/2; }

double square(double x) { return x*x; }

double sloping_cos(double x) { return cos(x)+slope(x); }

int main(){
	
	using namespace Graph_lib;
	
	constexpr int xmax = 600;
	constexpr int ymax = 600;
	
	
	Simple_window win {Point{100,100},xmax,ymax,"Function graphs"};
	
	
	Axis x {Axis::x ,Point{300,300},400,20,"1 == 20 pixels"};
	Axis y {Axis::y ,Point{300,300},400,20,"1 == 20 pixels"};
	
	x.set_color(Color::red);
	y.set_color(Color::red);
	
	win.attach(x);
	win.attach(y);
	win.wait_for_button();
	
	constexpr int r_min = -10;
	constexpr int r_max = 11;
	
	constexpr int x_orig = xmax/2;
	constexpr int y_orig = ymax/2;
	Point orig {x_orig,y_orig};
	
	constexpr int n_points = 400;
	
	constexpr int x_scale = 20;
	constexpr int y_scale = 20;

	Function s {one,r_min,r_max,orig,n_points,x_scale,y_scale};
	Function s2 {slope,r_min,r_max,orig,n_points,x_scale,y_scale};
	
	Text ts {Point{100,y_orig+60},"x/2"};
	
	win.attach(s);
	win.attach(s2);
	win.attach(ts);
	win.wait_for_button();
	
	Function s3 {square,r_min,r_max,orig,n_points,x_scale,y_scale};
	
	win.attach(s3);
	win.wait_for_button();
	
	Function cose {cos, 0, 200, Point{20,150},1000,50,50};
	
	cose.set_color(Color::blue);
	
	win.attach(cose);
	win.wait_for_button();

	Function s5 {sloping_cos, r_min,r_max,orig,400,30,30};
	
	win.attach(s5);
	win.wait_for_button();
	
}
