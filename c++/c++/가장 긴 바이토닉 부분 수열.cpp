#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n, i, j, m = 0;
	vector<int> arr(1010);
	vector<int> dp1(1010), dp2(1010);
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (i = 1; i <= n; i++) {
		dp1[i] = 1;
		for (j = 1; j <= i; j++) {
			if (arr[j] < arr[i] && dp1[i] < dp1[j] + 1) {
				dp1[i] += 1;
			}
		}
	}

	for (i = n; i >= 1; i--) {
		dp2[i] = 1;
		for (j = n; j >= i; j--) {
			if (arr[j] < arr[i] && dp2[i] < dp2[j] + 1) {
				dp2[i] += 1;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		m = max(m, dp1[i] + dp2[i] - 1);
	}

	cout << m;
}