#include <iostream>
using namespace std;

int main()
{
	/*
		Mảng 1 chiều:
		Cú pháp: <kiểu dữ liệu> <tên mảng>[ <kích cỡ mảng> ]

	*/

	// tạo mảng
	char sdt[100] = {};				// mảng rỗng có kích cỡ là 100
	float val[4] = { 1,2,5,6 };		// mảng khi chưa biết trước kích thước

	//in phần tử trong mảng
	cout << val[0] << endl;			// in phần tử đầu trong mảng (chỉ số của các ký tự bắt đầu bằng số 0)
	cout << val[3] << endl;

	// in toàn bộ mảng (nên sử dụng vòng lặp)
	for (int i = 0; i < 4; i++)
	{
		cout << val[i] << " ";
	}

	// gán phần tử vào từng chỉ số trong mảng
	sdt[0] = 'i';
	sdt[4] = 'j';
	cout << "\n" << sdt[0] << endl;
	cout << sdt[4] << endl;

	// nhập dữ liệu vào trong mảng
	
	cin >> sdt;
	cout << sdt << " " << endl;
	return 0;
}