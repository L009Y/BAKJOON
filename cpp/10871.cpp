// X���� ���� ��
/*
���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù° �ٿ� N�� X�� �־�����. (1 �� N, X �� 10,000)
��° �ٿ� ���� A�� �̷�� ���� N���� �־�����. �־����� ������ ��� 1���� ũ�ų� ����, 10,000���� �۰ų� ���� �����̴�.
��� - X���� ���� ���� �Է¹��� ������� �������� ������ ����Ѵ�. X���� ���� ���� ��� �ϳ� �����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, x;
	cin >> num >> x;
	
	int* sequence = new int[num + 1];
	vector<int> store;

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &sequence[i]);
		if(sequence[i] < x){
			store.push_back(sequence[i]);
		}
	}
	for (int i = 0; i < store.size(); i++) {
		printf("%d ", store[i]);
	}
}