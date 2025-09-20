#include<bits/stdc++.h>
using namespace std;
int a[4], ans = 0;
int main() {
	for (int i = 0; i < 4; i++)cin >> a[i];
	for (int i = 0; i < 4; i++) {
		if (a[i] < 60) {
			cout << "Poor LanYangYang" << endl;
			exit(0);
		}
		if (a[i] >= 90)ans++;
	}
	if (ans == 4)cout << 5 << endl;
	else cout << ans << endl;
	return 0;
}
