#include<iostream>
using namespace std;
template <class T>
class MyStack {
	T data[2];
public:
	int tos = -1;
	void push(T element) {
		if (tos == 1) { cout << "stack full�̹Ƿ� �� ���� ���մϴ�." << endl; }
		else { tos++; data[tos] = element; }
	}
	T pop() {
		if (tos == -1) { cout << "stack empty - ���α׷��� �����մϴ�." << endl; exit(0); }
		return data[tos--];
	}
};

int main() {
	MyStack<string> stack;
	stack.push("Bye"); stack.push("Hello"); stack.push("How r u");
	cout << "���� string ���ÿ� " << stack.tos + 1 << "�� ����" << endl;
	cout << "�� ���� �ִ� " << stack.pop() << " ����" << endl;
	cout << "�� ���� �ִ� " << stack.pop() << " ����" << endl;
	cout << "�� ���� �ִ� " << stack.pop() << " ����" << endl;
}