#include <iostream>
using namespace std;

int main()
{
	/*
		Mảng động:
		Cú pháp: <kiểu dữ liệu> * <tên mảng> = new <kiểu dữ liệu>[ <số phần tử> ]
		Thường dùng khi người dùng cần nhập dữ liệu , tránh việc lãng phí hay thiếu tài nguyên máy
	*/
	
	// tạo mảng động
	int* a = new int[100];

	// nhập dữ liệu vào mảng
	for (size_t i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	
	// in dữ liệu
	for (size_t i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}