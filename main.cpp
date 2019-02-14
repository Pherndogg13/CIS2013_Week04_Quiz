#include <iostream>
using namespace std;

void fizz() {
	cout << "Fizz";
}

void buzz() {
	cout << "Buzz";
}

int main(){
		for(int n=1; n<=100; n++) {
			if( ( n % 3) == 0 && ((n % 5) == 0)) {
				// cout << "FizzBuzz" << endl;
				fizz();
				buzz();
			} else if ( ( n % 3) == 0 ) {
				fizz();
			} else if ( ( n % 5) == 0 ) {
				buzz();
			} else {
				cout << n;
			}
			cout << endl;
	}
	return 0;
}