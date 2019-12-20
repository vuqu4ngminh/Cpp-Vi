#include <iostream>
using namespace std;

int main()
{
	// câu lệnh if else
	// phép so sánh ( > < >= <= == != )

	// ví dụ cơ bản
	cout << "Nhập giá trị cua a" << endl;
	int a;
	cin >> a ;
	cout << "Nhập giá trị b" << endl;
	int b;
	cin >> b ;
	if (a > b)
	{
		cout << "Vậy a > b" << endl;
	}
	else
	{
		cout << "Vậy a < b" << endl;
	}

	return 0;
}