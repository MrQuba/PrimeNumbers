#include<bits/stdc++.h> 
#include <iostream>

using namespace std;

int divisors(int dividend, bool disableOutput) {
	int size = 0;
	for (int i = 1; i <= dividend; i++) {
		float division = dividend % i;
		if(!disableOutput) cout << dividend << " % " << i << " = " << division << endl;
		if (division == 0) size++;
	}
	return size;
}
int main() {
	// declare variables
	int dividend;
	bool disableOutput;
	int amountOfDivisors;
	int amountOfPrimeNumbers;
	vector<int> primeNumbers;
	int startFrom;
	// user settings
	cout << "Input range of numbers where I'll search for prime ones: " << endl;
		cin >> dividend;
	cout << "Disable output? 1 for yes, 0 for no" << endl;
		cin >> disableOutput;
	// search for prime numbers
		for (int i = 1; i < dividend; i += 2) {
			if (i - 1 == 2) amountOfPrimeNumbers++;
			amountOfDivisors = divisors(i, disableOutput);
			if (amountOfDivisors == 2) {
				primeNumbers.push_back(i);
				amountOfPrimeNumbers++;
				}
	}

		cout << "Prime numbers:" << endl;
		// display results
		for (int element : primeNumbers) {
			cout << element << ", ";
	}
	cout << "Amount of prime numbers in range of " << dividend << " numbers is: " << amountOfPrimeNumbers  << endl;

	return 0;
}