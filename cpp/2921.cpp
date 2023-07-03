// 도미노
/*
 N을 입력받은 뒤, 크기가 N인 도미노 세트에는 점이 몇 개 찍혀 있는지 구하는 프로그램을 작성하시오.
입력 - 첫째 줄에 도미노 세트의 크기 N (1 ≤ N ≤ 1000)이 주어진다.
출력 - 크기가 N인 도미노 세트에 찍혀 있는 점의 개수를 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int num, sum = 0; 
	cin >> num;

	for (int i = 0; i <= num; i++) {
		for (int j = i; j <= num; j++) {
			sum += i + j;
		}
	}
	cout << sum;
}