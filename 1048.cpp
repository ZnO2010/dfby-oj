#include<bits/stdc++.h>
using namespace std;
int t, k;
int win[] = {0, 2, 3, 1};
int main() {
	cin >> t >> k;
	if (t == k)cout << "tie" << endl;
	else if (win[t] == k)cout << "win" << endl;
	else cout << "lose" << endl;
	return 0;
}
