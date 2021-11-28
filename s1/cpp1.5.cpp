#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c, e, f, g;
	cin >> a >> b >> c >> e >> f >> g;
	cout << fabs((a - e) * 3600 + (b - f) * 60 + c - g);
	return 0;

}