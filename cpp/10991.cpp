// º° Âï±â - 16

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j > 0; j--)
			cout << " ";
		for (int k = num - i; k < num; k++) {
			cout << "*";
			if (k != num - 1)
				cout << " ";
		}
		cout << '\n';
	}
}