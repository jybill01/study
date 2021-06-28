#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, i, m = 0;
	vector<int> arr(100100), dp(100100);
	cin >> n;
	for (i = 1; i <= n; i++) cin >> arr[i];
	dp[1] = arr[1];
	m = dp[1];
	for (i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		m = max(m, dp[i]);
	}
	cout << m;
}