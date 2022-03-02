#include <iostream>
#include <string>

using namespace std;

struct Student {
	string maHs;
	string hoTen;
	char gioiTinh;
	float diemToan, diemLy, diemHoa, DTB;
};
void input(Student &a) {
	getline(cin, a.maHs); fflush(stdin);
	getline(cin, a.hoTen); fflush(stdin);
	cin >> a.gioiTinh;
	float t, l, h;
	cin >> t >> l >> h;
	a.diemToan = t;
	a.diemLy = l;
	a.diemHoa = h;
	a.DTB = (t + l + h) / 3;
}
void output(Student a) {
	cout << a.maHs << '\t';
	cout << a.hoTen << '\t';
	cout << a.gioiTinh << '\t';
	cout << a.diemToan << '\t';
	cout << a.diemLy << '\t';
	cout << a.diemHoa << '\t';
	cout << a.DTB << endl;
}
int main() {
	Student a;
	input(a);
	output(a);
	return 0;
}
