#include<iostream>
#include <math.h>  
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//Ðánh d?u chua có ph?n t? nào s? d?ng h?t
int A[MAX];//Luu hoán v? vào m?ng A
int start[MAX]; 
int a[2]={2,8},b[2]={8,2};
int check=0,minx=10000000;
int test(int a[],int solan);
int chuyen();
void xuat(int a[]) {
    for (int i = 1; i <= n; i++)
        cout << a[i] ;
    cout << endl;
}
void init(int tong,int a){
	int i;
	for(i=0;i<=tong;i++){
		if(i<=a){
			start[i]=2;
		}else{
			start[i]=8;
		}
	}
}
int Try(int k,int c,int d) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n thì s? dánh d?u
        if (!Bool[i]) {
            A[k] = start[i]; // Luu m?t ph?n t? vào hoán v?
            Bool[i] = 1;//Ðánh d?u dã dùng
            if (k == n){
            	int test28=test(a,c);
            	int test82=test(b,d);
            	//cout<<test28<<" "<<test82<<endl;
            	if(test28 && test82){
            		check=1;
            		
            		if(minx>chuyen()){
            			minx=chuyen();
            			return 0;
            		}
            		
                	//return 0;
                }
            }
            else
                Try(k + 1,c,d);
            Bool[i] = 0;
        }
    }
    
}
int chuyen(){
	int sochuyen=0;
	int k=n-1;
	for(int i=1;i<=n;i++){
		sochuyen=sochuyen+(pow(10,k)*A[i]);
		k--;
		
	}
	return sochuyen;
}
int test(int k[],int solan){
	int dem=0;
	for(int i=0;i<n;i++){
		if(A[i]==k[0] && A[i+1]==k[1]){
			dem++;
		}
	}
	if(dem==solan){
		return 1;
	}else{
		return 0;
	}
};
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	init(a+b,a);
    n=a+b;
    Try(1,c,d);
    if(check==1){
    	cout<<minx;   	
	}else if(check == 0){
		cout<<"Yeu Ha Noi";
	}   
}
