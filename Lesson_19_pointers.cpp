#include <iostream>
using namespace std;

int main()
{
	// Con trỏ
	
	int num = 3;

	// tham chiếu
	cout << "Địa chỉ vùng nhớ của num: " << &num << endl;

	// trỏ tới địa chỉ
	int* newNum = &num;					// biến mới sử dụng chung địa chỉ trong bộ nhớ với biến cũ
	cout << "Địa chỉ vùng nhớ của newNum: " << newNum << endl;
	
	// in kết quả
	cout << num << endl;
	cout << *newNum << endl;

	return 0;
}