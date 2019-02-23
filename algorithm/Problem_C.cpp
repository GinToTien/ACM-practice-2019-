#include <iostream>
using namespace std;
int doubleArray(int a[] ,int n,int length,int k){
	length=length*2+1;
	int i,b[100];
	if(n==0){
		return a[k];
	}else{
		for(i=0;i<=length;i++){
			if(i!=(length/2)){
				b[i]=a[i];
			}else{
				b[i]=a[i]+1;
			}
			doubleArray(b,n--,length, k);
		}
	}
	
}
int main() 
{
    int a[100],n=0,k=0,vitri=0;
    a[0]=1;
    cout<<"nhap n va k : ";
    cin>>n;
    cin>>k;
    vitri=doubleArray(a,n-1,1,k);
    cout<<vitri;
    
    return 0;
}

