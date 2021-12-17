#include <iostream>
#include <string>
#include <vector>
using namespace std; 
 
 
int main(void) {
	
	int x , y;
	cin >> x >> y;
 
	for (size_t i = 0; i < y; i++) {
 
		if (x % 10 != 0) {
			x--; 
		}
		else {
			x = x / 10;
		}
	}
 
 
	cout << x; 
 
 
	
}