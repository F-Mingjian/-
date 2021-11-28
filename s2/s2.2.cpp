#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	double e, sum;
	cin >> a >> b >> c >> d;
	cout << "A:" << 2.75 * a << endl;
	cout << "B:" << 12.5 * b << endl;
	cout << "C:" << 26.8 * c << endl;
	if (d <= 3) {
		e = 512 * d;
		cout << "D:" << e << endl;
	}
	else if (d > 3 && d <= 8) {
		e = 0.9 * 512 * d;
		cout <<  "D:" << e << endl;
	}
	else if (d > 8) {
		e = 0.85 * 512 * d;
		cout << "D:" << e << endl;
	}
	sum = 2.75 * a + 12.5 * b + 26.8 * c + e;
	cout << "total:"<<sum << endl;
}