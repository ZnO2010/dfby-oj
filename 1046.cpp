#include<bits/stdc++.h>
using namespace std;
int a[4];
int main() {
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a, a + 4);
	if (a[0] + 2 == a[1] && a[1] + 2 == a[2] && a[2] + 2 == a[3]) {
		cout << a[0] << "+2=" << a[1] << endl;
		cout << a[1] << "+2=" << a[2] << endl;
		cout << a[2] << "+2=" << a[3] << endl;
	} else {
		cout << a[3] << " " << a[2] << " " << a[1] << " " << a[0] << endl;
	}
	return 0;
}
