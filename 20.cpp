#include <iostream>

using namespace std;

const int n = 10000;
int arr[n];

int main() {
	
	int rem = 100, carry, len = 1;
	arr[0] = 1;
	for (int j = 2; j <= rem; ++j) {
		int i = 0;
		carry = 0;
		while (i < len) {
			int val = j * arr[i] + carry;
			arr[i] = val % 10;
			carry = val / 10;
			i++;
		}
		while (carry) {
			arr[i] = carry % 10;
			carry = carry / 10;
			i++;
		}
		len = i;
	}
	int i = 0, sum = 0;
	while (i < len)
		sum += arr[i], printf("%d", arr[i]), i++;
	printf(" %d\n", sum);
	return 0;
}
