#include<iostream>
using namespace std;
int main()
{
	int n = 0, dodai = 1, maxsize=0;
	float maxValue = 0;
	cin >> n;
	int *a=new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while (dodai<=n) {
		for (int i = 0; i <= n-dodai; i++) {
			float tempValue = 0;
			for (int j = i; j <i+dodai; j++) {
				tempValue += a[j] ;
			}
			tempValue /= dodai;
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
