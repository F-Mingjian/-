#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x;
	cin >> x;
	cout << sin(x) << endl;
	cout << tan(x) << endl;
	cout << log10(x) << endl;
	cout << log(x) << endl;
	cout << x * x << endl;
	cout << sqrt(x) << endl;
	cout << pow(x, 10) << endl;
	cout << pow(x, (double)1 / 10) << endl;///默认是整形除法
	cout << pow(x, -1) << endl;
	cout << exp(x) << endl;
	cout << fabs(pow(x, 5) + log10(x * x + 1) - pow(2, x) - 13) << endl;
	return 0;


}