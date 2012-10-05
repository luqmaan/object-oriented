#include <iostream>	
#include <string>

using namespace std;

class aRandomNumberGenerator {

public:

	aRandomNumberGenerator() {
		srand ( time(NULL) );
	}

	void setLow(int l) {
		low = (int) l;
	}
	void setHigh(int h) {
		high = h;
	}

	int generate() {
		//if (low == NULL || high == NULL) {
			//throw "error, run setHigh or setLow";
		//}
	
		int mod = (high - low) +1;
		int num = (rand() % mod);

		return num + 1;

	};

private:

	int low;
	int high;

};


class Tracker {

public:

	Tracker() {
		for (int i = 0; i < 8; i++) {
			count[i] = 0;
		}
	}

	void trackInt(int n) {
		count[n - 1]++;
	};

	int getCount(int n) {
		return count[n-1];
	}


private:

	// length = high - low
	int count[8];

};
