// �� ������ ������
// ������ �ٿ�� ������ ��ٰ� ����, �ڽ��� ���� ����� ������ �ñ�������. �л�ý��۵� ���� �������ϴ� �ٿ츦 ���� �����ֵ��� ����. 
// �Է� - ù ��° �ٿ� �б��� �� T�� �־�����.�� ��° �ٺ��� T�� �б⿡ ���� ������ �־�����.
// �� �б⿡ ���� ������ ������ ���� �����Ǿ� �ִ�.ù ��° �ٿ� ����� ������ �� N�� �־�����, ���� N�� �ٿ� ���ļ� N�� ������� ���� C�� ���� G�� �־�����. 
// (1 �� N �� 10, 1 �� C �� 6, C�� ����) G�� { 0, 0.7, 1, 1.3, 1.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3 } �� �ϳ��̸� �Ҽ� �κ��� �ִ� �� �ڸ����� �־�����.
// ��� - �� �б⿡ ���� �ٿ��� �� ������ ����(GPA)�� ����Ѵ�.������� ���� ������ 10 - 1���� ����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int semester, subject, hakjum, sumHakjum;
	double score, GPA;

	cin >> semester;
	int count = semester;

	int saveH[100];
	double saveS[100];

	while (true) {
		sumHakjum = 0, GPA = 0;

		cin >> subject;
		for (int i = 0; i < subject; i++) {
			cin >> hakjum >> score;
			sumHakjum += hakjum, GPA += (hakjum * score);
		}
		saveH[semester - count] = sumHakjum;
		saveS[semester - count] = GPA/sumHakjum;

		count--;
		if (count == 0)
			break;
	}

	cout << fixed;
	cout.precision(1);
	for (int i = 0 ; i < semester; i++) {
		cout << saveH[i] << " " << saveS[i] << endl;
	}
}