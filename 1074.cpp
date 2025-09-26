#include<iostream>
#include<cmath>
using namespace std;
int a, b, c;
int main() {
	cin >> a >> b >> c;
	cout << 1 + ceil((c - a) * 1.0 / (a - b)) << endl;
	return 0;
}
