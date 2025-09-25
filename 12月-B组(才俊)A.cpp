#include<bits/stdc++.h>
using namespace std;
int n, t = 0, a[500010], b[500010];
long long ans = 0;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] - b[i] >= a[t] - b[t])t = i;
	}
	for (int i = 1; i <= n; i++)ans += (i == t ? a[i] : b[i]);
	cout << ans << endl;
	return 0;
}
