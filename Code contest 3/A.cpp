#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t, a[10] ={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	cin>>t;
	
	while(t--){
		int n,count=0;
		cin>>n;
		int i = 9;
		while(n!=0){
			if(n >= a[i] ){
				count++;
				n-=a[i];
			}
			else i--;	
		}
		cout<<count<<endl;
	}		
		
	
	
	return 0;
}

