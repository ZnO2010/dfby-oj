#include<bits/stdc++.h>
using namespace std;
int n, ans = 2;
struct hd {
	int b;
	int e;
	bool operator <(const hd b)const {
		return e < b.e;
	}
} a[100010];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i].b >> a[i].e;
	sort(a + 1, a + n + 1);
	int end1 = a[1].e, end2 = a[2].e;
	for (int i = 1; i <= n; i++) {
		if (a[i].b >= end1 && a[i].b >= end2) {
			ans++;
			if (end1 > end2)end1 = a[i].e;
			else end2 = a[i].e;
		} else if (a[i].b >= end1) {
			ans++;
			end1 = a[i].e;
		} else if (a[i].b >= end2) {
			ans++;
			end2 = a[i].e;
		}
	}
	cout << ans << endl;
	return 0;
}
