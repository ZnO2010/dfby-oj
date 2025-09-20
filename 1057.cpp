#include<bits/stdc++.h>
using namespace std;
int n, ans = 0;
bool pd(int n) {
	if (n % 5)return false;
	while (n) {
		if (n % 10 == 5)return true;
		n /= 10;
	}
	return false;
}
int main() {
	cin >> n;
	for (int i = 5; i <= n; i++)ans += pd(i);
	cout << ans << endl;
	return 0;
}
