// 얼마?
// 모든 옵션이 주어진 자동차를 구매하는데 필요한 액수를 계산해 주자.
// 입력 - 첫째 줄에 테스트 케이스의 개수가 주어진다.
// 각 테스트 케이스의 첫 줄엔 자동차의 가격 s가 주어진다. (1 ≤ s ≤ 100 000)
// 둘째 줄엔 해빈이가 구매하려고 하는 서로 다른 옵션의 개수 n이 주어진다. (0 ≤ n ≤ 1 000)
// 뒤이어 n개의 줄이 입력으로 들어온다.각 줄은 q 와 p로 이루어져 있는데 q는 해빈이가 사려고 하는 특정 옵션의 개수이고 p는 해당 옵션의 가격이다. (1 ≤ q ≤ 100, 1 ≤ p ≤ 10 000)
// 출력 - 각 테스트 케이스 마다, 해빈이가 최종적으로 구매하려는 자동차의 가격을 한줄씩 출력한다.

#include <iostream>
using namespace std;

int main() {
	int testNum, opNum, carPrice, opPrice, totalPrice, option;
	cin >> testNum;
	
	while (true) {
		cin >> carPrice;
		totalPrice = carPrice;
		cin >> opNum;

		for (int i = 0; i < opNum; i++) {
			cin >> option >> opPrice;
			totalPrice += (option * opPrice);
		}
		cout << totalPrice << '\n';
		testNum--;
		if (testNum == 0)
			break;
	}
}