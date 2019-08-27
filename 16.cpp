#include <iostream>

using namespace std;

const int n = 10000;
int arr[n];

int main() {
	
	int rem = 999, carry, len = 1;
	arr[0] = 2;
	for (int j = 0; j < rem; ++j) {
		int i = 0;
		carry = 0;
		while (i < len) {
			int val = 2 * arr[i] + carry;
			arr[i] = val % 10;
			carry = val / 10;
			i++;
		}
		arr[i] = carry;
		if (arr[i])
			len++;
	}
	int i = 0, sum = 0;
	while (i < len)
		sum += arr[i], printf("%d", arr[i]), i++;
	printf(" %d\n", sum);
	return 0;
}
