#include<bits/stdc++.h>
using namespace std;
int ans = 0;
bool pd(int n) {
	while (n) {
		if (n % 10 == 3)return true;
		n /= 10;
	}
	return false;
}
int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (int i = 1; i <= 1000; i++)ans += pd(i);
	cout << ans << endl;
	return 0;
}
