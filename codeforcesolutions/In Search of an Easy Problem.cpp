#include<iostream>
#include <vector>
#include <string>
using namespace std;
 
 
int main(void)
{
	int x;  
	cin >> x; 
	int y;
	int easy = 0;
	int hard = 0;
 
	for (int i = 0; i < x; i++) {
		cin >> y; 
		if (y == 0) {
			easy++;
		}
		else {
			hard++;
		}
	}
 
	if (hard >= 1) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}
}
 