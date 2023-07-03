// º° Âï±â - 20

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < num; j++) {
					cout << " ";
					cout << "*";
			}
		}
		else {
			for (int j = 0; j < num; j++) {
					cout << "*";
					if (j != num - 1)
						cout << " ";
			}
		}
		cout << '\n';
	}
}
