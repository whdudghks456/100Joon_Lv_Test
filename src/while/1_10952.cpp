// A+B - 5
#include <iostream>
using namespace std;

int while_1_10952() {
	int a, b;
	a, b = 1;
	while(1) {
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		cout << a + b << '\n';
	}
}