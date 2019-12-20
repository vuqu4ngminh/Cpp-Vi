# include <iostream>
using namespace std;

int main()
{
	/*
		Mảng ký tự:

		Tương tự như mảng thường nhưng có ký tự null ở cuối

	*/

	char x[100];
	char y[100];
	int e;
	// nhập dữ liệu vào mảng
	cin >> x;
	
	cout << x << endl;
	
	// in ra độ dài mảng
	size_t lenght = strlen(x);

	// nhập họ và tên
	
	cout << "Hãy nhập họ và tên: ";
	cin.ignore();			// dùng để gõ ký tự Enter không bị lỗi
	cin.getline(y, 99);		// phải chừa lại 1 ký tự để dành cho ký tự null
	
	
	cout << "Hãy nhập tuổi: ";
	
	cin >> e;
	cout << "Hello " << y << ", your age is " <<  e << endl;
	return 0;
}