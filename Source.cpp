#include <iostream>

using namespace std;
int hieu(int a, int b){
	int hieu = 0;
	return hieu = a - b;
}
int tong(int a, int b){
	int sum = 0;
	sum = float(a + b);
	return sum;
}
int tich(int a, int b){
	int tich = 0;
	return tich = a * b ;
}
float thuong(int a, int b){
	float thuong = 0;
	return thuong = a/b;
}
int main()
{
	int a , int b;
	
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: "; cin >> a;
	cout <<" Nhap b: "; cin >> b;
	cout << "Tong la" <<tong(a,b)<<endl;
	cout << "HIEU A VA B" << hieu(a,b)<<endl;
	cout << " tich la " << tich (a,b)<<endl;
	cout << " Thuong la " << thuong(a,b)<<endl;
	system("pause");
	return 0;
}
