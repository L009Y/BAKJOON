// �ٸ�ü
/*
�Է� - ù ��° �ٿ� 1 �̻� 100 ������ �ڿ��� T�� �־�����.
���� T���� �ٿ� 4 �̻� 100 ������ �ڿ��� V�� E�� ������ ���̿� �ΰ� �־�����. V�� E�� ���� �������� ������ �𼭸��� �����̴�.
��� - �� V�� E�� ���� ���ϴٸ�ü�� ���� ���� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int test, edge, vertex;
	cin >> test;

	for(int i = 0; i<test; i++){
		cin >> vertex >> edge;
		cout << 2 + edge - vertex << endl;
	}
}