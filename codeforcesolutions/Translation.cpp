#include <iostream>
#include <string>
#include <vector>
using namespace std; 
 
 
int main(void) {
	
 
	string z,y; 
	cin >> z;
	cin >> y; 
 
	string temp; 
	int flag = 0; 
 
	
	for (size_t i = 1; i <= y.length(); i++) {
		temp += y.at(y.length() - i);
	}
	
	if (z == y && z != temp) {
		cout << "NO";
		flag = 1;
	}
 
	if (flag == 0) {
		if (temp == z) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	
 
}
 