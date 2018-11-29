#include <iostream>

using namespace std;

int main()
{
	int dob;
	cout << "unesi dob: " << endl;
	cin >> dob;

	switch (dob) {
	case 18:
		cout << "punoljetan si" << endl;
		break;
	case 21:
		cout << "navrsio si 21!!!" << endl;
		break;
	default:
		cout << "dob ti je bezveze" << endl;
	}

}
