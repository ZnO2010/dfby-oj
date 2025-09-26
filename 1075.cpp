#include<bits/stdc++.h>
using namespace std;
int n, ans = 0;
double l;
int main() {
	cin >> n;
	l = log2(n);
	if (ceil(l) - l < l - floor(l))ans = pow(2, ceil(l));
	else ans = pow(2, floor(l));
	cout << ans << endl;
	return 0;
}
