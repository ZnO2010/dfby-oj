#include<bits/stdc++.h>
using namespace std;
int i, j, n, ans, a[105], dp[105];
int main() {
    cin >> n;
    for (i = 1; i <= n; i++)cin >> a[i];
    dp[1] = a[1];
    for (i = 2; i <= n; i++)dp[i] = dp[i - 1] + a[i];
    ans = INT_MIN;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            ans = max(dp[i] - dp[j] + a[j], ans);
    }
    cout << ans << endl;
    return 0;
}