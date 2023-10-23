#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	int hieu = 0;
	return hieu = a - b;
}
=======
int tong(int a, int b){
	int sum = 0;
	sum = a + b;
	return sum;
}
int hieu(int a, int b);
>>>>>>> 4e64232351f6b5f0e75830699840b40283e33ca9
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
<<<<<<< HEAD
	int a , int b;
	cout << a;
	cin >> a;
	cout << b;
	cin >> b;
	cout << "HIEU A VA B" << hieu(a,b)<<endl;
	
=======
	int a,b;

>>>>>>> 4e64232351f6b5f0e75830699840b40283e33ca9
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: "; cin >> a;
	cout <<" Nhap b: "; cin >> b;
	cout << "Tong la" <<tong(a,b);
	system("pause");
	return 0;
}
