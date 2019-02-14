#include <iostream>
using namespace std;

int main(){
		for(int n=1; n<=100; n++) {
			if( ( n % 3) == 0 && ((n % 5) == 0)) {
				cout << "Fizzbuzz" << endl;
			} else if ( ( n % 3) == 0 ) {
				cout << "Fizz" << endl;
			} else if ( ( n % 5) == 0 ) {
				cout << "Buzz" << endl;
			} else {
				cout << n << endl;
			}
	}
	return 0;
}