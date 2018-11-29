#include <iostream>

using namespace std;

int main()
{
	
	//modul rješavanje!!!
	int a,b,c,d,e;
		cout << "unesi 4-znamenkasti: " << endl;
	cin >> a;
	b = (a / 1000);
	c = ((a % 1000) / 100);
	d = (((a % 1000) % 100) / 10);
	e = (((a % 1000) % 100) % 10);
	cout << b << endl << c << endl << d << endl << e << endl;

	if (9>b, b>=c, b>=d, b>=e) {
		cout << (b+1) << endl;
	}
	else if (9 > c, c >= b, c >= d, c>=e) {
		cout << (c+1) << endl;
	}
	else if (9 > d,d>=b,d>=c,d>=e) {
		cout << (d+1) << endl;
	}
	else if (9 > e,e>=b,e>=c,e>=d) {
		cout << (e+1) << endl;
	}
	else {
		cout << f << endl;
	}
}
