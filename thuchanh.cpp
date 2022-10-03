#include <bits/stdc++.h>

using namespace std;

long long int tus(long long int n) {
	long long int sum = 0;
	if(n == 1) {
		return 1;
	 } else {
		for(long long int i = 1; i*i <= n; i++) {
			if(n % i == 0) {
				sum +=(i + n/i);
				long long int tmp = n / i;
				if(tmp == i) {
					sum -=i;
				}
			}
		}
	}
	return sum;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		long long int n;
		cin >> n;
		cout << tus(n) << endl;
	}
	return 0;
}
