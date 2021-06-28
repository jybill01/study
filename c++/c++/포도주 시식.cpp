#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, i;
	vector<int> A(10100);
	vector<int> B(10100);
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (i = 1; i <= n; i++) {
		if (B[i - 1] && B[i - 2]) {
			
		}
		else if (B[i - 1] && !B[i - 2]) {
			B[i] = A[i] + B[i - 1];
		}
		else {
			B[i] = A[i] + B[i - 2];
		}
	}
}