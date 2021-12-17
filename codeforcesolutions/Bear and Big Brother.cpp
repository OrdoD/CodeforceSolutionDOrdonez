#include<iostream>
#include <vector>
#include <string>
using namespace std;
 
 
int main(void)
{
	int x, y;
	cin >> x >> y;
	int dis = 0;
	int years = 0;
 
	while (x <= y) {
		years++;
		x = x * 3; 
		y = y * 2;
	}
	
	cout << years; 
	
}
 