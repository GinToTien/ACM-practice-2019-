#include<iostream>
using namespace std;
int main()
{
	int n = 0, dodai = 1, maxsize = 0;
	float maxValue = 0;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n+1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 0;
	}
	b[n] = 0;
	while (dodai <= n) {
		for (int i = 0; i <= n - dodai; i++) {
			float tempValue = 0;
			b[i] = a[i] + b[i + 1];
						
						tempValue =b[i]/dodai;
						if (tempValue >= maxValue ) {
							maxsize = dodai;
							maxValue = tempValue;
						}					
		}
		dodai++;

	}
	cout << maxsize;
	return 0;
}
