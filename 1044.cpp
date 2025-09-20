#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin >> n;
	if (n < 10)cout << "A" << endl;
	else if (n < 20)cout << "B" << endl;
	else if (n < 40)cout << "C" << endl;
	else if (n < 50)cout << "D" << endl;
	else if (n < 80)cout << "E" << endl;
	return 0;
}
