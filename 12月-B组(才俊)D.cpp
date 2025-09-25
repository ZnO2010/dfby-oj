#include<bits/stdc++.h>
using namespace std;
int n, ans, temp, arr[1010];
bool f[1010];
int fun() {
	int t = 1, k = 0;
	for (int i = 1; i <= n; i++) {
		if (f[i])continue;
		if (arr[i] == t)k++;
		t++;
	}
	return k;
}
void dfs(int depth) {
	if (depth > n) {
		temp = fun();
		ans = max(ans, temp);
		return ;
	}
	f[depth] = 0;
	dfs(depth + 1);
	f[depth] = 1;
	dfs(depth + 1);
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> arr[i];
	dfs(1);
	cout << ans << endl;
	return 0;
}
