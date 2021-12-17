#include <iostream>
#include <string>
#include <vector>
using namespace std; 
 
int main() {
	/*
	int x; 
	cin >> x; 
 
	((x % 2 == 0) && (x !=2)) ? cout << "YES" : cout << "NO"; 
	*/
 
	string word; 
	string complete; 
	vector<string> alloutput; 
	int size;
	int x; 
 
	cin >> x; 
 
 
 
	for (int i = 0; i < x; i++) {
		word = ""; 
		cin >> word; 
 
		if (word.length() > 10) {
			size = word.length() - 2;
			complete = word.substr(0,1); 
			complete += to_string(size); 
			complete += word.substr(word.length() - 1, word.length());
			alloutput.push_back(complete);
			 
		}
		else {
 
			alloutput.push_back(word);
		}
		
	}
 
	for (int z = 0; z < alloutput.size(); z++) {
		cout << alloutput[z] << "\n";
	}
	
}