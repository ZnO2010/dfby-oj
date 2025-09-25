#include<bits/stdc++.h>
using namespace std;
map<string, int> mp;
int n, ans = 0;
string s, t;
void make_map() {
	for (int i = 0; i <= s.size() - 8; i++) {
		t = s.substr(i, 8);
		sort(t.begin(), t.end());
		mp[t]++;
	}
}
int main() {
	cin >> s;
	make_map();
	cin >> n;
	while (n--) {
		cin >> t;
		sort(t.begin(), t.end());
		ans += mp[t];
	}
	cout << ans << endl;
	return 0;
}
