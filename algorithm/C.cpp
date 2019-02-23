#include<iostream>
#include<math.h>
using namespace std;

int BinarySearch(int a[] ,int start ,int mid, int end ,int n)
{ 
    if(n==1)
    	return 1;
    
	int left = start;
	int right = end;
	
	if (left < right) {
		a[mid]= n;
		
		int midR = (mid + right +1) / 2;
		int midL = (left + mid) / 2;	
		
		BinarySearch(a ,left ,midL, mid ,n-1);
		BinarySearch(a ,mid ,midR ,right ,n-1);
		
	} 
	else cout<<"HU"<<endl;
}

int main()
{
	int t;
	cin>>t;
	int n,k;
	
	while (t--)
	{
		cin>>n>>k;
		int temp=pow(2,n)-1;
		int a[temp];
		
		for(int j=0 ; j<temp ; j++)
			a[j]=1;
	
		BinarySearch(a ,0 ,temp/2 ,temp-1 ,n);	
		
		cout<<"Array: ";
		for(int i=0 ; i<temp ; i++)
			cout<<a[i]<<" ";
		cout<<endl;
		cout<<a[k-1]<<endl;	
		
	}
	
	return 0;
}


