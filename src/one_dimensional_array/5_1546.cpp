// 평균
#include <iostream>
using namespace std;

int one_dimensional_array_5_1546() {
	int a, max = 0;
	float sum = 0;
	cin >> a;
	
	float array[a] = {0, };
	for(int i = 0; i < a; i++) {
		cin >> array[i];
		if(max < array[i]) max = array[i];
	}
	for(int i = 0; i < a; i++) {
		sum += array[i]/max*100;
	}
	
	cout << sum / a;
	return 0;
}