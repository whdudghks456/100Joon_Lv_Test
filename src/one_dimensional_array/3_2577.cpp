// 숫자의 개수
#include <iostream>
using namespace std;

int one_dimensional_array_3_2577() {
	int a, b, c, result;
	
	int array[10] = {0, };
	
	cin >> a >> b >> c;
	result = a * b * c;
	while(result != 0) {
		array[result % 10]++;
		result /= 10;
	}
	for(int i = 0; i < 10; i++) {
		cout << array[i] << '\n';
	}
	
	return 0;
}