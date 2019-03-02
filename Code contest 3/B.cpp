#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int a[n] , b[n];
		
		for(int i=0 ; i<n ; i++){
			cin>>a[i];
			cin>>b[i];
		}
		
		//Selection sort
		for(int i=0 ; i<n-1 ; i++){
			int min = i;
			for(int j=i+1 ; j<n ; j++){
				if( b[min] > b[j])
					min = j;
			}
			
			if(min != i){
				int temp = b[min];
				b[min] = b[i];
				b[i] = temp;
				
				temp = a[min];
				a[min] = a[i];
				a[i] = temp;
			}	
		}		
		//test arr after sort
//		for(int i=0 ; i<n ; i++){
//			cout<<a[i]<<" "<<b[i]<<endl;
//		}
		
		int end = b[0], count=1;
		for(int i=1 ; i<n ; i++){
			if(end <= a[i]){
				count++;
				end = b[i];
			}
		}	
		cout<<count<<endl;
	}
	
	return 0;
}

