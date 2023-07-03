// 할로윈의 사탕
/*
매년 할로윈데이때마다 아부지는 사탕을 자식들에게 최대한 많은 사탕을 나누어 주시기 원하며 자신에게는 몇개가 남게되는지에 알고 싶어 하신다. 
이런 아부지를 도와서 형제간의 싸움을 막아보자.
입력 - 가장 첫 번째 줄에는 테스트 케이스의 수가 입력되고, 각 테스트 케이스마다 사탕의 개수 c와 형제의 수 v가 차례대로 입력된다.
출력 - 출력은 예제를 보고 ”You get __ piece(s) and your dad gets __ piece(s).” 형식에 맞추어 적절하게 출력하라.
제한 - 1 ≤ c, v ≤ 1,000
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