// 완전제곱수
// M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을 작성하시오. 
// 입력 - 첫째 줄에 M이, 둘째 줄에 N이 주어진다. M과 N은 10000이하의 자연수이며 M은 N보다 같거나 작다.
// 출력 - M이상 N이하의 자연수 중 완전제곱수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 단, M이상 N이하의 자연수 중 완전제곱수가 없을 경우는 첫째 줄에 -1을 출력한다.

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int start, end;

	cin >> start;
	cin >> end;

	int sum = 0, count = 0;
	vector<int> psNum;
	
	for (int i = 1; i <= 100; i++) {
		for (int j = start; j <= end; j++) {
			if (i * i == j) {
				sum += j;
				psNum.push_back(j);
				count++;
				break;
			}
		}
	}

	if (count != 0)
		cout << sum << endl << psNum[0];
	else
		cout << -1;
}
