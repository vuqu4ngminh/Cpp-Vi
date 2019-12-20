#include <iostream>
#include <string>                           // thêm thư viện string để thêm tính năng
using namespace std;

int main()
{
    // chuỗi

    // chuỗi có thể gán vào biến
    string hello = "Xin chào ";

    // lấy độ dài của chuỗi
    cout << "Độ dài của chuỗi là: " << hello.length() << endl;

    // lấy từng chỉ số trong chuỗi
    cout << hello[0] << endl;               // chỉ số bắt đầu bằng số 0 tính từ chữ đầu tiên

    // nhập chuỗi
    string name;
    cout << "Hãy nhập tên: ";
    cin >> name;                            // trường hợp này không thể nhập được chuỗi gồm cả dấu cách
    cout << hello + name << endl;

    // trương hợp ĐẶC BIỆT
    string fullName;
    cout << "Hãy nhập tên đầy đủ: ";
    getline(cin, fullName);                 // trường hợp này có thể nhập được chuỗi gồm cả dấu cách
    cout << "Hello " << fullName << endl;

    // thay đổi giá trị của chỉ số
    hello[1] = 'y';
    cout << hello << endl;
    return 0;
}