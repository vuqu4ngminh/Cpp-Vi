#include <iostream>
using namespace std;

int main()
{
	// phép gán cơ bản (= += -= *= /= %=)
	int b = 10;
	cout << "b = 10" << endl;
	cout << "Nhập giá trị a" << endl;
	int a;
	cin >> a;
	
	a += b;
	cout << "Phep gán += của b cho a là :" << a << endl;
	a -= b;
	cout << "Phep gán -= của b cho a là :" << a << endl;
	a *= b;
	cout << "Phep gán *= của b cho a là :" << a << endl;
	a %= b;
	cout << "Phep gán %= của b cho a là :" << a << endl;
	return 0;
}