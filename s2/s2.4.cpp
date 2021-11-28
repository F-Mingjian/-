#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	float a;
	cin >> a;
	float sum = a;
	float c = a;
	for (int i = 1; i < num; i++) {
		float b;
		cin >> b;
		sum += b;
		if (b > a) a = b;
		else if(b<=c)
			c = b;
	}
	cout << (sum - a - c)/(float)(num-2)<< endl;

}