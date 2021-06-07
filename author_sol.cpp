#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// arrange even numbers before odd numbers
		sort(a.begin(), a.end(), [](int x, int y) {
			return x % 2 < y % 2;
		});
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				// check if the gcd of current element and elements 
				// from 'i' + 1 to 'n' are greater than 1
				ans += __gcd(a[i], a[j] * 2) > 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
