#include <iostream>

using namespace std;

int main() {

	int i;

	cout << "숫자를 입력하세요! : ";
	cin >> i;

	cout << "0부터 " << i << "까지: ";
	
	for (int a = 0; a <= i; a++) {
		cout << a << " ";
	}

	system("pause");
}