// 윷놀이
/*
 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중 
 어떤 것인지를 결정하는 프로그램을 작성하라.
입력 - 첫째 줄부터 셋째 줄까지 각 줄에 각각 한 번 던진 윷짝들의 상태를 나타내는 네 개의 정수(0 또는 1)가 빈칸을 사이에 두고 주어진다.
출력 - 첫째 줄부터 셋째 줄까지 한 줄에 하나씩 결과를 도는 A, 개는 B, 걸은 C, 윷은 D, 모는 E로 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int a, sum;
	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a;
			sum += a;
		}
		switch (sum)
		{
		case 0:
			cout << "D" << '\n';
			break;
		case 1:
			cout << "C" << '\n';
			break;
		case 2:
			cout << "B" << '\n';
			break;
		case 3:
			cout << "A" << '\n';
			break;
		case 4:
			cout << "E" << '\n';
			break;
		default:
			break;
		}
	}
}