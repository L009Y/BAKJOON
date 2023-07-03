// 약수 구하기
/*
두 개의 자연수 N과 K가 주어졌을 때, N의 약수들 중 K번째로 작은 수를 출력하는 프로그램을 작성하시오.
입력
첫째 줄에 N과 K가 빈칸을 사이에 두고 주어진다. N은 1 이상 10,000 이하이다. K는 1 이상 N 이하이다.
출력
첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력하시오.
*/

#include <iostream>
using namespace std;
/*
int main() {
	int num, small, count = 0;
	cin >> num >> small;

	int aliquot[1000] = {0};

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			aliquot[count+1] = i;
			count++;
		}
	}

	if (count < small)
		cout << aliquot[0];
	else
		cout << aliquot[small];
}
*/

#include <vector>

int main() {
	int num, small;
	cin >> num >> small;

	vector<int> aliquot;

	aliquot.push_back(0);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) 
			aliquot.push_back(i);
	}

	if (aliquot.size() < small)
		cout << aliquot[0];
	else
		cout << aliquot[small];
}