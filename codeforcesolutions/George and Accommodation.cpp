#include<iostream>
#include <vector>
#include <string>
using namespace std;
 
 
int main(void)
{
	int x;
	cin >> x;
	
	int y, z;
	int maxCap = 0; 
	for (int i = 0; i < x; i++) {
		cin >> y >> z; 
		if (y != z && y + 2 <= z) {
			maxCap++; 
		}
	}
 
	cout << maxCap; 
}