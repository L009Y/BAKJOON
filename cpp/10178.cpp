// �ҷ����� ����
/*
�ų� �ҷ������̶����� �ƺ����� ������ �ڽĵ鿡�� �ִ��� ���� ������ ������ �ֽñ� ���ϸ� �ڽſ��Դ� ��� ���ԵǴ����� �˰� �;� �ϽŴ�. 
�̷� �ƺ����� ���ͼ� �������� �ο��� ���ƺ���.
�Է� - ���� ù ��° �ٿ��� �׽�Ʈ ���̽��� ���� �Էµǰ�, �� �׽�Ʈ ���̽����� ������ ���� c�� ������ �� v�� ���ʴ�� �Էµȴ�.
��� - ����� ������ ���� ��You get __ piece(s) and your dad gets __ piece(s).�� ���Ŀ� ���߾� �����ϰ� ����϶�.
���� - 1 �� c, v �� 1,000
*/

#include <iostream>
using namespace std;

int main() {
	int test, candy, brother,myCandy, dadCandy;
	cin >> test;

	while (true) {
		cin >> candy >> brother;
		myCandy = candy / brother;
		dadCandy = candy % brother;

		cout << "You get " << myCandy << " piece(s) and your dad gets " << dadCandy << " piece(s)." << endl;

		test--;
		if (test == 0)
			break;
	}
}