#include<bits/stdc++.h>
using namespace std;
int n;
bool is_prime(int x) {
	if (x < 2)return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)return false;
	return true;
}
void f(int x) {
	if (is_prime(x)) {
		cout << x << endl;
		exit(0);
	}
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) {
			cout << i << endl;
			f(x / i);
		}
}
int main() {
	cin >> n;
	f(n);
	return 0;
}
