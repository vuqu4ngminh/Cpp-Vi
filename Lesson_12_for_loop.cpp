#include <iostream>
using namespace std;

int main()
{
	/* vòng lặp for
		Cấu trúc:
		for (Khỏi tạo;Điều kiện;Bước nhảy)
		{ 
			// nội dung thực hiện
		}
	 */
	int giaithua = 1;
	int n;
	cout << "Tinh giai thừa !" << endl;
	cout << "Nhập giá trị n: ";
	cin >> n;
	if (n < 0)
	{
		cout << "n không thể là số âm" << endl;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			giaithua *= i;
		}
		cout << n << "! = " << giaithua << endl;
	}
	
	return 0;
}