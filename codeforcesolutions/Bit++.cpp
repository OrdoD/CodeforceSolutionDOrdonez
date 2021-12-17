#include<iostream>
#include <vector>
#include <string>
using namespace std;
 
 
int main(void)
{
	int x;
	cin >> x;
	string y; 
 
	int count = 0; 
	for (int i = 0; i < x; i++) {
		cin >> y;
		if (y == "++X" || y == "X++") {
			count++;
		}
		else {
			count--; 
		}
	}
	
	cout << count;
}
 