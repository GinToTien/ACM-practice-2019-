#include <iostream>
using namespace std;
int doubleArray(int a[], int n, int length, int k, int dem) {
	length = length * 2 + 1;//độ dài của mảng ảo do lặp lại mảng và thêm phần tử giữa bằng vậy
	int i, b[100];
	int h = 0;//số index của mảng thực a 
	// sử dụng đệ quy cho đến khi mảng cuối cùng tạo ra được lập thì dừng -> n=0
	if (n == 0) {
		return a[k - 1];
	}
	else {
		for (i = 0; i <= length - 1; i++) { // vòng for để chép lại mảng nếu thực a vào mảng ảo b phần tử ở giữa sẽ bằng phần tử lớn nhất trong a + 1
			if (i != (length / 2)) {
				b[i] = a[h];
				h++;
			}
			else {
				h = 0;// khi đến giữa phải reset h về 0 để tìm quét lại a từ đầu 
				b[i] = dem + 1;
			}
		}
		dem++;
		n--;
		doubleArray(b, n, length, k, dem);
	}


}
int main()
{
	int a[100], n = 0, k = 0, vitri = 0, dem = 1;
	a[0] = 1;
	cout << "nhap n va k : ";
	cin >> n;
	cin >> k;
	vitri = doubleArray(a, n - 1, 1, k, dem);
	cout << vitri;

	return 0;
}