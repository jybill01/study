#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, i;
	vector<int> dp(100100);
	cin >> n;
	for (i = 1; i <= n; i++)dp[i] = i;
	for (i = 2; i <= n; i++) {
		for (int j = 2; j*j <= ; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[n] << endl;
}
