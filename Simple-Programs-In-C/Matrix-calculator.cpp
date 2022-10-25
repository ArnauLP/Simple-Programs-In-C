//This program calculates a matrix based on your input
//This is a version written in C++ (using while)

#include <iostream>
using namespace std;

int main() {

	//variable declaration
	int size;
	int i, j = 0;

	//we ask the user for the input
	cout << "Input your matrix size (2-3): " << endl;
	cin >> size;

	//vector t
	int t[size][size];

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "Position? " << i << " " << j << endl;
			cin >> t[i][j];
		}
	}
	//calc matrix
	int calc = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			calc = calc + t[i][j];
		}
	}

	cout << "The sum is: " << calc;

	return 0;
}

