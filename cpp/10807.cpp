// ���� ����
/*
�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. ��° �ٿ��� ������ �������� ���еǾ����ִ�. 
��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. �Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.
���
ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int* val = new int[num];

	for (int i = 0; i < num; i++) 
		cin >> val[i];
	int find, count = 0;
	cin >> find;

	for (int i = 0; i < num; i++) {
		if (find == val[i])
			count++;
	}
	cout << count;

	delete[]val;
}