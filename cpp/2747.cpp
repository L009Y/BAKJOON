// 피보나치 수 
/*
n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성하시오.
입력 - 첫째 줄에 n이 주어진다. n은 45보다 작거나 같은 자연수이다.
출력 - 첫째 줄에 n번째 피보나치 수를 출력한다.
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