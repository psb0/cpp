#include<iostream>
#include<fstream>
#include<string>
#include"hw.h"
using namespace std;

int main() {
	ifstream fin("��������.txt");
	if (!fin) { cerr << "���� ���� ����"; return 0; }
	string m[100][2];
	int size = 0;

	while (true) {
		fin >> m[size][0] >> m[size][1];
		if (fin.eof()) break;
		size++;
	}
	fin.close();

	print_2dim_array(m,size); /* ������ �迭 ���� ���*/
	cout << "---------------------------------" << endl;
	cout << "�� ���� �� = " << size << endl;
	cout << "---------------------------------" << endl;

	string a;
	int b = size - 1;
	while (true) {
		cout << "ã�� ���� ����: ";
		getline(cin, a);
		if (a == "exit") break;
		for (int i = 0; i < size; i++) {
			if (a == m[i][0]) {
				cout << "--> " << m[i][1] << endl;
				break;
			}
			if (i == b) {
				cout << "�̵�� �����Դϴ�." << endl;
			}
		}//for
	}
	cout << "�̿����ּż� �����մϴ�." << endl;
}