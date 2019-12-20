#include <iostream>
using namespace std;

int main()
{
	/* toán tử ba ngôi
	   tổng quát : biến = (điều kiện) ? biểu thức 1 : biểu thức 2 ;
	*/

	int a;
	int b;
	cout << "Nhập giá trị a" << endl;
	cin >> a;
	cout << "Nhập giá trị b" << endl;
	cin >> b;

	string x;
	x = (a > b) ? "a > b" : " a < b" ;
	cout << x << endl;
	return 0;
}