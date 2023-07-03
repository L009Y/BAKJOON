// 다면체
/*
입력 - 첫 번째 줄에 1 이상 100 이하의 자연수 T가 주어진다.
다음 T개의 줄에 4 이상 100 이하의 자연수 V와 E가 공백을 사이에 두고 주어진다. V와 E는 각각 꼭짓점의 개수와 모서리의 개수이다.
출력 - 각 V와 E에 대해 볼록다면체의 면의 수를 한 줄에 하나씩 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int test, edge, vertex;
	cin >> test;

	for(int i = 0; i<test; i++){
		cin >> vertex >> edge;
		cout << 2 + edge - vertex << endl;
	}
}