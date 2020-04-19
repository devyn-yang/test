#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{

	int a = 10;
	int b = 9;
	unsigned char cValue = 10;
	unsigned char  iValue = 20;
	cout << "c-:  " << cValue - iValue <<endl; 
	int c3 = 6;
	const int & c2 = c3;
	decltype(auto) c1 = cValue;

	cout << "c1 type  " << typeid(c1).name() << endl;
	decltype(a +b) c = a + b;

	cout << c << endl;
	cout << "type " << 22.12 - 50u << endl;
	short aa = 0xff08;
	unsigned short bb = aa;
	cout << aa << ":::"<< bb << endl;
	return 0;
}
