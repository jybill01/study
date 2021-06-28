#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t, z, n, i;
	vector<long long> dp(110);
	cin >> t;
	for (z = 1; z <= t; z++) {
		cin >> n;
		for (i = 1; i <= 5; i++) {
			if (i <= 3)dp[i] = 1;
			else dp[i] = 2;
		}
		for (i = 6; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}
		cout << dp[n] << endl;
	}
}