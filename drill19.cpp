#include "std_lib_facilities.h"

template<typename T>
struct S
{
    
    S() {}
    S(T t): val(t){}

    S& operator=(T tt) {val = tt; return *this;}
    
    void set(T t) { val = t;}
    const T& get() const {return val;}

    T& get_non_const() {return val;}

    private:
        T val;
};

template<typename T>
const T& get(S<T>& s)
{
    return s.get();
}

template<typename T>
void read_val(T& v)
{
    cin >> v;
}


int main()
{
    S<int> v1;
    cout << "Int: "; read_val(v1.get_non_const());
    cout << get(v1) << "\n";

    S<char> v2;
    cout << "Char: "; read_val(v2.get_non_const());
    cout << get(v2) << "\n";
    
    S<double> v3;
    cout << "Double: "; read_val(v3.get_non_const());
    cout << v3.get() << "\n";

    S<string> v4;
    cout << "String: "; read_val(v4.get_non_const());
    cout << v4.get() << "\n";

    S<vector<int>> v5(vector<int>(5,15));
    for(int i: get(v5))
        cout << i << ";";
    cout << "\n";

    return 0;
}
