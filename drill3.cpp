#include "std_lib_facilities.h"


class B1 {

public:
	virtual void vf() const {cout <<"B::vf\n";}
	void f() const {cout <<"B::f\n";}
	virtual void pvf() = 0;
	
}; 



class D1 : public B1 {
	
public:	
	virtual void vf() const  { cout << "D::vf \n"; }
	void f() const {cout <<"D::f\n";}
	
};




class D2 : public D1 {

public:
	
	void pvf() override;


};

void call(const B1& b){
	
	b.vf();
	b.f();
	
	
};

class B2 {

public:
	virtual void pvf() = 0;

};

int main(){

	D2 d2;
	B1 b;
	D1 d;
	
	
	call(b);
	cout << " \n";
	call(d);
	
	cout << " \n";
	d.vf();
	d.f();

	return 0;


}
