#include<iostream>
#include<fstream>
#include<algorithm>	//sort
using namespace std;

int main() {
	double arr[31];
	ifstream fin("sort_before.txt");
	ofstream fout("sort_after.txt");

	for (int i = 0; i < 31; i++) fin >> arr[i];
	sort(arr, arr+31, greater<double>());
	for (int i = 0; i < 31; i++) fout << arr[i] << endl;

	cout << "sort_after.txt 파일을 확인해보세요." << endl;

	fin.close(); fout.close();
	return 0;
}