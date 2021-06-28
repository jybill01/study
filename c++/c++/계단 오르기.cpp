#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, i;
	vector<int> arr(310), dp(310);
	cin >> n;
	for (i = 1; i <= n; i++)cin >> arr[i];
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for (i = 3; i <= n; i++) {
		dp[i] = max(arr[i] + arr[i - 1] + dp[i - 3], arr[i] + dp[i - 2]);
	}
	cout << dp[n];
}