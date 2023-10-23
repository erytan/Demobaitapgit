#include <iostream>

using namespace std;
int tong(int a, int b){
	int sum = 0;
	sum = a + b;
	return sum;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: "; cin >> a;
	cout <<" Nhap b: "; cin >> b;
	cout << "Tong la" <<tong(a,b);
	system("pause");
	return 0;
}
