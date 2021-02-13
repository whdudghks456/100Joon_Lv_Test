// 별 찍기 - 2
#include <iostream>
using namespace std;

int for_10_2439() {
	int a;
	
	// 입출력 속도 늘리기 - printf, scanf 만큼 빠르게 해줌 endl 대신 '\n'쓰기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	for(int i = a; i > 0; i--) {
		for(int j = 1; j <= a; j++){
			if(j >= i)
				cout << '*';
			else cout << " ";
		}
		cout << '\n';
	}
	
	return 0;
}