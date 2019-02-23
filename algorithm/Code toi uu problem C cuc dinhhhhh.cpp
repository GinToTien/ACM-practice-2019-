#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long ans = 1;
		k--;
		
		while(k%2){
			ans++;
			k/=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
