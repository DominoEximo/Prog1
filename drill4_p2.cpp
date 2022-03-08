#include "std_lib_facilities.h"

class Person {

	int age;
	string name;
public:
	Person(int a, string n);
	int get_age(){return a;}
	string get_name(){return n;}
	
};

Person::Person(int a, string n)
{
	age = a;
	name = n;


}

istream& operator>>(istream& is, Person& d)

{
	char ch1 = 0;
	char ch2 = 0;
	char ch3 = 0;
	Person dd;

	if (is >> ch1 >> dd.age
		>> ch2 >> dd.name
		>> ch3) {
		if (ch1!= '(' || ch2!=':' || ch3!=')') {
			is.clear(ios_base::failbit);
			return is;
		}
	}
	else
		return is;
	d = dd;
	return is;
}


int main(){

	Person Pali {63, "Goofy"};
	
	
	cout << Pali.get_name() << " " << Pali.get_age() << "\n";
	
	Person masik;
	
	cin >> masik.name >> masik.age;
	cout << masik.get_name() << " " << masik.get_age() << "\n";

return 0;
}
