#include <iostream>	
#include <string>
#include "aRandomNumberGenerator.h"

using namespace std;

int main() {

	cout << "hello" << endl;

	aRandomNumberGenerator r;
	Tracker t;

	r.setLow(1);
	r.setHigh(9);

	for (int i = 0; i < 100; i++) {

		int randomNumber = r.generate();

		t.trackInt(randomNumber);

		cout << randomNumber << " ";

	}

	cout << endl;
	return 0;
}