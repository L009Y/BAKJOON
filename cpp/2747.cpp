// �Ǻ���ġ �� 
/*
n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� - ù° �ٿ� n�� �־�����. n�� 45���� �۰ų� ���� �ڿ����̴�.
��� - ù° �ٿ� n��° �Ǻ���ġ ���� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num; 
	cin >> num;

	int fibo[50];
	fibo[0] = 0, fibo[1] = 1;
	for (int i = 0; i < num; i++) {
		fibo[i + 2] = fibo[i] + fibo[i + 1];
	}
	cout << fibo[num];
}