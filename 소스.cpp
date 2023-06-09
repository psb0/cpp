#include<iostream>
#include<fstream>
#include<string>
#include"hw.h"
using namespace std;

int main() {
	ifstream fin("동물사전.txt");
	if (!fin) { cerr << "사전 열기 실패"; return 0; }
	string m[100][2];
	int size = 0;

	while (true) {
		fin >> m[size][0] >> m[size][1];
		if (fin.eof()) break;
		size++;
	}
	fin.close();

	print_2dim_array(m,size); /* 이차월 배열 내용 출력*/
	cout << "---------------------------------" << endl;
	cout << "총 동물 수 = " << size << endl;
	cout << "---------------------------------" << endl;

	string a;
	int b = size - 1;
	while (true) {
		cout << "찾고 싶은 동물: ";
		getline(cin, a);
		if (a == "exit") break;
		for (int i = 0; i < size; i++) {
			if (a == m[i][0]) {
				cout << "--> " << m[i][1] << endl;
				break;
			}
			if (i == b) {
				cout << "미등록 동물입니다." << endl;
			}
		}//for
	}
	cout << "이용해주셔서 감사합니다." << endl;
}