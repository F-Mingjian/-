#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	c = 1;
	cin >> a >> b;
	int n = 0;
	while (true) {
		
			c *= b;
			n++;
		if (c >= a) {
			cout << n-1;
			break;
		}
		

	}
}