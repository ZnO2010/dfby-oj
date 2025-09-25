#include<bits/stdc++.h>
using namespace std;
int n, ans, temp, a[1010], arr[1010], dp[1010];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		arr[i] = a[i] - i;
	}
	dp[1] = arr[1];
	ans = 1;
	for (int i = 2; i <= n; i++) {
		if (arr[i] >= dp[ans]) dp[++ans] = arr[i];
		else {
			int j = upper_bound(dp + 1, dp + ans + 1, arr[i]) - dp;
			dp[j] = arr[i];
		}
	}
	cout << ans << endl;
	return 0;
}		
