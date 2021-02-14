// // 최소, 최대
// #include <iostream>
// using namespace std;

// int main() {
// 	int a, min, max;
// 	min = 1000000;
// 	max = -1000000;
// 	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
// 	cin.tie(NULL);
// 	ios_base::sync_with_stdio(false);
	
// 	cin >> a;
// 	int array[a];
	
// 	for(int i = 0; i < a; i++) {
// 		cin >> array[i];
// 		if (min > array[i]) min = array[i];
// 		if (max < array[i]) max = array[i];
// 	}
// 	cout << min << " " << max;
	
// 	return 0;
// }