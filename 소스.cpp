#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include"hw.h"
using namespace std;

int main() {
	ifstream fin("��������.txt");
	if (!fin) { cerr << "���� ���� ����"; return 0; }

	map<string, string> m;
	string a, b;
	while (true) {
		fin >> a >> b;
		if (fin.eof()) break;
		m[a] = b;
	}
	fin.close();
	print_map(m);

	cout << "---------------------------------" << endl;
	cout << "�� ���� �� = " << m.size() << endl;
	cout << "---------------------------------" << endl;

	while (true) {
		cout << "ã�� ���� ����: ";
		getline(cin, a);
		if (a == "exit")	break;

		if (m.count(a) == 0)
			cout << "�̵�� �����Դϴ�." << endl;
		else
			cout << "-->" << m[a] << endl;
	}//while end

	cout << "�̿����ּż� �����մϴ�!" << endl;
}