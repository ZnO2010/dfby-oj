#include<bits/stdc++.h>
using namespace std;
int i, n, x, temp1, temp2;
vector<int> v;
int main() {
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        temp1 = INT_MAX;
        for (int j = 0; j != v.size(); j++) {
            if (v[j] >= x) {
                if (temp1 < v[j]) {
                    temp1 = v[j];
                    temp2 = j;
                }
            }
        }
        if (temp1 == INT_MAX)v.push_back(x);
        else v[temp2] = x;
    }
    cout << v.size() << endl;
    return 0;
}