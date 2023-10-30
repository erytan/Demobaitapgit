#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
=======
int tong(int a, int b);
int hieu(int a, int b){
	int x
	return x=a-b; 
}
>>>>>>> 93eea8b28605b707c9375a944844288123a4f189
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap so thu nhat: ";
	cin>>a;
	cout<<"Nhap so thu hai: ";
	cin>>b;
	cout<<a<<" + "<<b<<" = "<<tong(a+b)<<endl;
	cout<<a<<" - "<<b<<" = "<<hieu(a+b)<<endl;
	cout<<a<<" * "<<b<<" = "<<tich(a+b)<<endl;
	cout<<a<<" / "<<b<<" = "<<thuong(a+b)<<endl;
	system("pause");
	return 0;
}