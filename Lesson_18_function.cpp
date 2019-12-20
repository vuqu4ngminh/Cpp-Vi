# include <iostream>
using namespace std;
/*
	Tổng quan về hàm:
	Cú pháp:
		kiểu tên(tham số){

		}
*/

// tạo function ngaoài hàm main()
float cube(float a) {
	return a * a * a;
}

// đệ quy (1 hàm tự gọi chính nó)
int tinhGiaiThua(int num) {
	if(num == 0){
		return 1;
	} else{
		return num * tinhGiaiThua(num - 1);
	}
}

int main()
{
	float x;
	cout << "Tính lập phương: ";
	cin >> x;							// truyền tham số

	// gọi hàm 
	cout << x << " ^ 3 = " << cube(x) << endl;

	// ví dụ về đệ quy
	int so;
	cout << "Nhập số để tính giai thừa: ";
	cin >> so;

	cout << so << "! = " << tinhGiaiThua(so) << endl;

	/*
		Lưu ý:
		- Đệ quy gây tốn nhiều tài nguyên nên chỉ nên dùng cho một số thao tác tính toán phức tạp
		- Trong 1 hàm đệ quy cần có câu lệnh điều kiện (để có điểm dừng), tránh tạo vòng lặp vô hạn
	*/
	return 0;
}