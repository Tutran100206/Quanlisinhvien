#include<iostream>
#include<string>
using namespace std;
struct HOCSINH
{
	string maso, hoten, ngaysinh, diachi, gioitinh;
	string diemtb;
};
void nhap1hs(HOCSINH& hs);
void nhap(HOCSINH hs[], int& n);
void xuat1HS(HOCSINH& hs);
void xuat(HOCSINH hs[], int n);
void sohocsinhlenlop(HOCSINH hs[], int n);
int main() {
	HOCSINH hs[50];
	int n;
	nhap(hs, n);
	xuat(hs, n);
	sohocsinhlenlop(hs, n);
	return 0;
}
void nhap(HOCSINH hs[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		nhap1hs(hs[i]);
		cout << endl;
	}
}
void nhap1hs(HOCSINH& hs) {
	cin >> hs.maso;
	cin.ignore();
	getline(cin, hs.hoten);
	cin >> hs.ngaysinh;
	cin.ignore();
	getline(cin, hs.diachi);
	cin >> hs.gioitinh;
	cin >> hs.diemtb;
}
void xuat1HS(HOCSINH &hs) {
	cout << hs.maso << endl;
	cout << hs.hoten << endl;
	cout << hs.ngaysinh << endl;
	cout << hs.diachi << endl;
	cout << hs.gioitinh << endl;
	cout << hs.diemtb << endl;
}
void xuat(HOCSINH hs[], int n) {
	for (int i = 0; i < n; i++) {
		xuat1HS(hs[i]);
	}
}
void sohocsinhlenlop(HOCSINH hs[], int n) {
	int tam = 0;
	for (int i = 0; i < n; i++) {
		if (hs[i].diemtb[0] >= '5') {
			tam++;
		}
	}
	cout << tam;
}
/*
*fulltest 200/200 uteoj
*/
