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
	cout << "반지름: ";
	cin >> b.r;
	cout << "구의 부피는 " << b.volume() << "입니다." << endl;
	cout << "원의 둘레는 " << b.area() << "입니다." << endl;
}