#include <iostream>
#include <string>
#include <vector>
using namespace std; 
 
struct card {
	char *face;
	char *suit;
};
 
int main(void) {
	/*
	int x;
	cin >> x;
 
	((x % 2 == 0) && (x !=2)) ? cout << "YES" : cout << "NO";
	*/
	/*
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
	*/
 
	/*
	printf("%4d\n", 1);
	printf("%4d\n", 12);
	printf("%4d\n", 123);
	printf("%4d\n", 1234);
	printf("%4d\n", 12345);
 
	printf("%4d\n", -1);
	printf("%4d\n", -12);
	printf("%4d\n", -123);
	printf("%4d\n", -1234);
	printf("%4d\n", -12345);
 
	printf("%-4d\n", 1);
	printf("%-4d\n", 12);
	printf("%-4d\n", 123);
	printf("%-4d\n", 1234);
	printf("%-4d\n", 12345);
	*/
 
	/*
	puts("123456790123456790123456780\n");
	printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
	printf("%-10s%-10d%-10c%-10f\n\n", "hello", 7, 'a', 1.23);
 
 
	int i = 8;
 
	i = i >> 1;
 
	printf("%d", i);
	
 
	int a, b, c, d, e, f, g;
 
	puts("Enter seven integers: "); 
	scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);
 
	puts("Enter seven integers: ");
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
	*/
 
	int x, y, z; 
	cin >> x >> y >> z; 
 
	size_t totalC = 0; 
 
	for (size_t i = 1; i <= z; i++) {
		totalC += i * x; 
	}
 
	if (totalC <= y ) {
		cout << 0; 
	}
	else {
		cout << totalC - y; 
	}
}