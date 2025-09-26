#include<iostream>
using namespace std;
int main() {
	int a, b, c, L;
	int count = 0;
	scanf("%d", &L);
	for (a = 1; a <= L - 2; a++) {
		for (b = 1; b <= L - a - 1; b++) {
			c = L - a - b;
			if (a + b > c && a + c > b && b + c > a) {
				if (a == b && a == c)
					continue;//等边
				else if (a == b || a == c || b == c)
					count = count + 2; //等腰增加记数2
				else
					count++;//增加记数1

			}
		}
	}
	count = count / 6; //考虑组合缩减数量
	printf("%d\n", count);
	return 0;
}
