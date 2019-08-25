#include <iostream>

using namespace std;


//const int n = 1e6;
//int dp[n];

long long solve(long long i) {
	if (i == 1)
		return 1;
	if (i & 1)
		return solve(3 * i + 1) + 1;
	else
		return solve(i / 2) + 1;
	/*if (dp[i] == 0) {
		if (i & 1)
			dp[i] = solve(3 * i + 1) + 1;
		else
			dp[i] = solve(i / 2) + 1;
	}
	return dp[i];*/
}

int main() {

	long long ans = 0, t;
	int num;
	for (int i = 1; i <= 1e6; ++i) {
		t = solve(i);
		if (t >= ans)
			ans = t, num = i;
		//if (dp[i] == 0)
		//else
		//ans = max(ans, dp[i]);
	}
	cout<<num<<endl;
	return 0;
}
