#include "Primer.h"
Primer::Primer() {
	a = 0;
	b = 0;
}

Primer::Primer()
{
}

void Primer::Example() {
	Random();
	int answer;
	cout << "Solve an example: " << a << " + " << b << endl;
	cin >> answer;
	cin.ignore();
	if (answer != a + b) {
		throw "Incorret!";
	}
	cout << "Good!" << endl;
}

void Primer::Random() {
	srand(time(0));
	a = rand() % 142;
	b = rand() % 173;
}
