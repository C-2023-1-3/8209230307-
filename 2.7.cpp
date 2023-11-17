#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int a = i; a > 0; a--) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}