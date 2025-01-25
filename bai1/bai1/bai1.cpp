#include<iostream>
#include<string>
using namespace std;
struct HOCSINH
{
	string maso, hoten, ngaysinh, diachi, gioitinh;
	double diemtb;
};
void nhap1hs(HOCSINH& hs);
void nhap(HOCSINH hs[], int& n);
void sohocsinhlenlop(HOCSINH hs[], int n);
int main() {
	HOCSINH hs[50];
	int n;
	nhap(hs, n);
	sohocsinhlenlop(hs, n);
	return 0;
}
void nhap(HOCSINH hs[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin hoc sinh " << i + 1 << endl;
		nhap1hs(hs[i]);
		cout << endl;
	}
}
void nhap1hs(HOCSINH& hs) {
	cout << "Nhap ma so hoc sinh: ";
	cin >> hs.maso;
	cin.ignore();
	cout << "Nhap ho va ten hoc sinh : ";
	getline(cin, hs.hoten);
	cout << "Nhap ngay thang nam sinh: ";
	getline(cin, hs.ngaysinh);
	cout << "Nhap dia chi: ";
	getline(cin, hs.diachi);
	cout << "Nhap gioi tinh: ";
	cin >> hs.gioitinh;
	cout << "Nhap diem trung binh: ";
	cin >> hs.diemtb;
}
void sohocsinhlenlop(HOCSINH hs[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (hs[i].diemtb >= 5.0) {
			dem++;
		}
	}
	cout << "so hoc sinh len lop la: " << dem;
}
