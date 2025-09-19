#include<bits/stdc++.h>
using namespace std;
int ans = 0;
int main() {
	for (int a = 1; a < 100; a++)
		for (int b = 1; b < 50; b++)
			for (int c = 1; c < 20; c++)
				if (a + b * 2 + c * 5 == 100)ans++;
	cout << ans << endl;
	return 0;
}
