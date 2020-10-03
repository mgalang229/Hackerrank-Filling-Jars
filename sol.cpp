#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	long long sum = 0;
	for (int qq = 1; qq <= m; qq++) {
		long long a, b, k;
		cin >> a >> b >> k;
		for (int i = a; i <= b; i++) {
			sum += k;
		}
	}
	cout << sum / n << '\n';
	return 0;
}
