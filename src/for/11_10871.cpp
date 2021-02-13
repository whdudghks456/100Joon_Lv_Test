// X보다 작은 수
#include <iostream>
using namespace std;

int for_11_10871() {
	int a, b, c;
	
	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a >> b;
	for(int i = 0; i < a; i++) {
		cin >> c;
		if(b > c) cout << c << " ";
	}
	
	return 0;
}