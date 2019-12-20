#include <iostream>
using namespace std;

int main()
{
	
	/* 
		Cấu trúc lặp do - while
		Cú pháp:
		do {
			nội dung thực hiện
		} while(điều kiện)
	*/
	int x;
	float a;
	float b;
	float c;
	cout << "Chương trình kiểm tra điểm theo yêu cầu" << endl;
	cout << "Lưu ý: Khi điểm trung bình nhỏ hơn điểm yêu cầu, chương trình sẽ dừng" << endl;
	cout << " " << endl;
	
	do
	{

		
		cout << "1. Toán" << endl;
		cout << "2. Văn" << endl;
		cout << "3. Anh" << endl;
		cout << "0. Thoát " << endl;
		cout << "Hãy chọn môn cần kiểm tra: ";
		cout << "\n=======================================\n";
		cin >> x;
		switch (x)
		{
		case 0:
			break;
		case 1:
			cout << "Hãy nhập 3 điểm thành phần môn Toán: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << "Điểm trung bình môn Toán là: " << (a + b + c) / 3 << endl;
			break;
		case 2:
			cout << "Hãy nhập 3 điểm thành phần môn Văn: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << "Điểm trung bình môn Văn là: " << (a + b + c) / 3 << endl;
			break;
		case 3:
			cout << "Hãy nhập 3 điểm thành phần môn Anh: ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << "Điểm trung bình môn Anh là: " << (a + b + c) / 3 << endl;
			break;
		default:
			cout << "Vui lòng nhập lạii" << endl;
			break;
		}
	} while (x != 0);
		
	
		return 0;
}