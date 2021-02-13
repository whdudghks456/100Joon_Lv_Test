// A+B - 7
#include <iostream>
using namespace std;

int for_7_11021() {
	int a, b, c;
	
	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	for(int i = 1; i <= a; i++) {
		cin >> b >> c;
		cout << "Case #" << i << ": " << b + c << '\n';
	}
	
	return 0;
}