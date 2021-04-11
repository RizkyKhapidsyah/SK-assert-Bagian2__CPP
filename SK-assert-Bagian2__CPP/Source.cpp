#include <iostream>
#include <conio.h>
#include <cassert>


using namespace std;

int main() {
	int a = 6;

	cout << "Assert 1" << endl;
	assert(a >= 6);
	
	cout << "Assert 2" << endl;
	assert(a < 5);
	
	_getch();
	return 0;
}