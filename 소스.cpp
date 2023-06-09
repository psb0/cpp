#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("score.txt");
	if (!fin) { cout << "파일 열기 실패"; return 1; }
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

	fout << "합계: " << sum << endl;
	fout << "평균: " << sum / 31.0 << endl;
	fout << "최고점: " << name[index] << ' ' << score[index] << endl;

	cout << "result.txt 파일을 확인해보세요." << endl;

	fin.close();	fout.close();
}