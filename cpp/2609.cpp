// 최대공약수와 최소공배수
/*
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
입력 - 첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
출력 - 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
	int a, b, gcd = 1, lcm = 0;
	cin >> a >> b;

	int min = a > b ? b : a;

	for (int i = 2; i <= min; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	lcm = (a * b) / gcd;

	cout << gcd << '\n' << lcm;
}