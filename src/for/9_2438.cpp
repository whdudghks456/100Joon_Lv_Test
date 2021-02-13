// 별 찍기 - 1
#include <iostream>
using namespace std;

int for_9_2438() {
	int a;
	
	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	for(int i = 0; i < a; i++) {
		for(int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
	
	return 0;
}