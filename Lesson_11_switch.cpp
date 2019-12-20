#include <iostream>
using namespace std;

int main()
{
	// câu lệnh rẽ nhánh switch
	char x = ' ' ;
	cout << "======================================" << endl;
	cout << "Hãy chọn 1 trong đáp án đúng (A,B,C,D)" << endl;
	cout << "  1 + 1 = ?" << endl;
	cout << "A. 3" << endl;
	cout << "B. 2" << endl;
	cout << "C. 0" << endl;
	cout << "D. 11" << endl;
	cout << "Đáp án cua bạn là: ";
	cin >> x;
	cout << "=======================================" << endl;

	switch (x)
	{
	case 'A':
	case 'a':
		cout << "False" << endl;
		break;
	case 'B':
	case 'b':
		cout << "True" << endl;
		break;
	case 'C':
	case 'c':
		cout << "False" << endl;
		break;
	case 'D':
	case 'd':
		cout << "False" << endl;
		break;
	default:
		cout << "False" << endl;
		break;
	}
	return 0;
}