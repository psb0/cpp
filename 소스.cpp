#include<iostream>
using namespace std;

class A {
public:
	int r;
	double volume() { return 4.0 / 3 * 3.14 * r * r * r; }
};
class B : public A {
public:
	double area() { return 2 * 3.14 * r; }
};

int main() {
	B b;
	cout << "������: ";
	cin >> b.r;
	cout << "���� ���Ǵ� " << b.volume() << "�Դϴ�." << endl;
	cout << "���� �ѷ��� " << b.area() << "�Դϴ�." << endl;
}