#include<bits/stdc++.h>
using namespace std;
int a[5];
int main() {
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	a[0] /= 3;
	a[4] += a[0];
	a[1] += a[0];
	a[1] /= 3;
	a[0] += a[1];
	a[2] += a[1];
	a[2] /= 3;
	a[1] += a[2];
	a[3] += a[2];
	a[3] /= 3;
	a[2] += a[3];
	a[4] += a[3];
	a[4] /= 3;
	a[3] += a[4];
	a[0] += a[4];
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
	return 0;
}
