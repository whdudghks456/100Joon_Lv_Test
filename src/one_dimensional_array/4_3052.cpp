// 나머지
#include <iostream>
using namespace std;

int one_dimensional_array_4_3052() {
	int a, count;
	count = 0;
	
	int array[42] = {0, };
	
	for(int i = 0; i < 10; i++) {
		cin >> a;
		array[a % 42]++;
	}
	for(int i = 0; i < 42; i++) {
		if(array[i] != 0) count++;
	}
	cout << count;
	return 0;
}