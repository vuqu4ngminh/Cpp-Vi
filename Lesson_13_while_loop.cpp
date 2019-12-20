#include <iostream>
using namespace std;

int main()
{
	/* 
		cấu trúc vòng lăp while
		tổng quát:

		while (điều kiện)
		{
			nội dung thực hiện
		}
	
	*/
	int x1;
	int x2;
	int n = 0;
	cout << "Hãy trả lời câu hỏi" << endl;
	cout << "x^2 - 3x + 2 = 0" << endl;
	cout << "Tìm x1 và x2" << endl;
	cout << "Bạn có 3 lần trả lời" << endl;
	
	while (n < 3)
	{
		cout << "Nhập x1: ";
		cin >> x1;
		cout << "Nhập x2: ";
		cin >> x2;
		if (n == 2)
		{
			cout << "Bạn đã thua" << endl;
			break;
		}
		else
		{
			if ((x1 == 2) && (x2 == 1))
			{
				cout << "Chúc mừng bạn đã trả lời đúng" << endl;
				break;
				
			}
			else 
			{
				cout << "Sai, bạn còn " << 2 - n << " lần trả lời" << endl;
				n++;
			}
		}
	}
	
	
	return 0;
}