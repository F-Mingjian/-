#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c,d;
	cin >> a >> b >> c;
	d = pow(b, 2)-4*a*c;
	cout << (0 - b + sqrt(d)) / (2 * a)<<' ';
	cout<<(0 - b - sqrt(d)) / (2 * a) << endl;


}