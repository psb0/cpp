#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("score.txt");
	if (!fin) { cout << "���� ���� ����"; return 1; }
	ofstream fout("result.txt");
	string name[31];	double score[31], sum = 0;
	int index, hscore = -99999;

	for (int i = 0; i < 31; i++) {
		fin >> name[i];	fin >> score[i];
		sum += score[i];
		if (hscore < score[i]) {
			hscore = score[i];
			index = i;
		}
	}

	fout << fixed;
	fout.precision(2);

	fout << "�հ�: " << sum << endl;
	fout << "���: " << sum / 31.0 << endl;
	fout << "�ְ���: " << name[index] << ' ' << score[index] << endl;

	cout << "result.txt ������ Ȯ���غ�����." << endl;

	fin.close();	fout.close();
}