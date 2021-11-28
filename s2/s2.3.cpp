#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 6; i <= n; i++) {
		if (i % 10 == 6) {
			if (i % 3 == 1)
				cout << i << " ";
		}
	}
}