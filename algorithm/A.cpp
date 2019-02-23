#include<bits/stdc++.h>
using namespace std;
int A;
int n,k;

int M=1e9+7;
long long powM(int n , int k)
{
	if(k==0) return 1;
	
	long long x=powM(n,k/2);
	if(k%2==0) return x*x%M;
	else return (x*x%M)*n%M;
}


int main()
{
	int t;
	cin>>t;
	
	while (t--)
	{
		cin>>n>>k;
		A=powM(n,k);
		cout<<A<<endl;	
 	}
	
	return 0;
}


