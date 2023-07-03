// 지능형 기차 2
/*
출발역에서 종착역까지 가는 도중 기차 안에 사람이 가장 많을 때의 사람 수를 계산하려고 한다. 
이 기차는 다음 조건을 만족하면서 운행된다고 가정한다.

기차는 역 번호 순서대로 운행한다.
출발역에서 내린 사람 수와 종착역에서 탄 사람 수는 0이다.
각 역에서 현재 기차에 있는 사람보다 더 많은 사람이 내리는 경우는 없다.
기차의 정원은 최대 10,000명이고, 정원을 초과하여 타는 경우는 없다.
10개의 역에 대해 기차에서 내린 사람 수와 탄 사람 수가 주어졌을 때, 기차에 사람이 가장 많을 때의 사람 수를 계산하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

int main() {
	int people = 0, ride, unload, max = -1;

	for (int i = 0; i < 10; i++) {
		cin >> unload >> ride;
		people += ride;
		people -= unload;
		if (max < people)
			max = people;
		}
		cout << max;
}