#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>
using namespace std;
 
 
int main(void)
{
 
	int x; 
	cin >> x;
	string y; 
	int count = 0;
	for (int i = 0; i < x; i++) {
		cin >> y; 
		if (y[0] == 'I') {
			count += 20;
		}
		else if (y[0] == 'D') {
			count += 12;
			}
		else if (y[0] == 'O') {
			count += 8;
		}
		else if (y[0] == 'C') {
			count += 6; 
		}
		else {
			count += 4;
		}
	}
 
	cout << count;
 
}
 