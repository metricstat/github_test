#include <iostream>

using namespace std;

int main() {

	int i;

	cout << "���ڸ� �Է��ϼ���! : ";
	cin >> i;

	cout << "0���� " << i << "����: ";
	
	for (int a = 0; a <= i; a++) {
		cout << a << " ";
	}

	system("pause");
}