#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int x)
{ 
	int left = 0;
	int right = n - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		if (x == a[mid]) 
			return mid+1;
		else if (x < a[mid]) 
			right = mid - 1;
		else if (x > a[mid]) 
			left = mid + 1;
	} 
	return -1;
}

int main(){
	int test;
	cin>>test;
	
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0 ; i<n ;i++)
			cin>>a[i];
		
		int result = BinarySearch(a,n,k);
		if(result==-1)
			cout<<"NO"<<endl;
		else cout<<result<<endl;
	}

	return 0;
}
