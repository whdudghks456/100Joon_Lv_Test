// 최댓값
#include <iostream>
using namespace std;

int one_dimensional_array_2_2562() {
	int a, max;
	max = 0;
	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int array[9];
	
	for(int i = 0; i < 9; i++) {
		cin >> array[i];
		if (max < array[i]) {
			max = array[i];
			a = i + 1;
		}
	}
	cout << max << '\n' << a;
	
	return 0;
}