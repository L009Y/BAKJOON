// 주차의 신
/*
입력
첫째 줄에 테스트 케이스의 개수 t가 주어진다. (1 ≤ t ≤ 100) 모든 테스트 케이스는 두 줄로 이루어져 있다. 
첫째 줄에는 선영이가 방문할 상점의 수 n이 주어지며 (1 ≤ n ≤ 20), 둘째 줄에는 상점의 위치가 주어진다. (0 ≤ xi ≤ 99)
출력
선영이가 가려고 했던 모든 상점을 방문하고 차로 돌아오기 위해 걸어야 하는 거리의 최솟값을 출력한다. 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	int store, locate;
	vector<int> coordinates;
	while (true) {
		cin >> store;
		for (int i = 0; i < store; i++) {
			cin >> locate;
			coordinates.push_back(locate);
		}
		sort(coordinates.begin(), coordinates.end());
		int sum = 0;


		test--;
		if (test == 0)
			break;
	}
}