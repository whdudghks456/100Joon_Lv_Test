// 평균은 넘겠지
#include <iostream>
using namespace std;

int main() {
	int a, cnt, sum, avg, num;
	int array[1000] = { 0, };
	
	cin >> a;
	float result;
	
	for(int i = 0; i < a; i++) {
		num = avg = sum = 0;
		cin >> cnt;
		for(int j = 0; j < cnt; j++) {
			cin >> array[j];
			sum += array[j];
		}
		avg = sum / cnt;
		for(int j = 0; j < cnt; j++) {
			if(array[j] > avg) num++;
		}
		result = (float)num / cnt * 100;
		
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << '\n';
	}
	
	return 0;
}