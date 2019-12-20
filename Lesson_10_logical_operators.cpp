#include <iostream>
using namespace std;

int main()
{
	/*
		Phép toán kết hợp nhiều điều kiện 
		|| : hoặc
		&& : và
		! : phủ định
	*/
	const int x = 5;
	float a ;
	float b ;
	float c ;

	cout << "Kiểm tra điểm qua môn" << endl;
	cout << "Nhập điểm toán" << endl;
	cin >> a;
	cout << "Nhập điểm văn" << endl;
	cin >> b;
	cout << "Nhập điểm ngoại ngữ" << endl;
	cin >> c;
	float tong;
	tong = (a + b + c) / 3;

	// điểm liệt 1 trong các môn là 3

	if ((a <= 3) || (b <= 3) || (c <= 3))
	{
		cout << "Bạn đã trượt" << endl;
	}
	else if (tong < x)
	{
		cout << "Điểm cua bạn là " << tong << " và bạn đã trượt" << endl;
	}
	else
	{
		cout << "Điểm cua bạn là " << tong << " và bạn đã qua môn" << endl;
	}
	
	return 0;
}