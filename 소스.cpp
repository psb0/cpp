#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	ofstream fout;
	fout.open("movie.txt");

	if (!fout) {
		cerr << "���� ���� ����";
		return 0;
	}

	int age = 50;
	string actor = "Ű�ƴ� ���꽺", movie = "John Wick";
	fout << age << endl;
	fout << actor << endl;
	fout << movie << endl;

	fout.close();

	cout << "movie.txt ������ Ȯ���غ�����." << endl;

}