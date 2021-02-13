// 더하기 사이클
#include <iostream>
using namespace std;

int while_3_1110() {
	int a, b, one, ten, count;
	count = 0;
	b = 0;
	
	cin >> a;
	b = a;
	do{
		one =  ((b / 10) + (b % 10)) % 10;
		ten = (b % 10) * 10;
		b = one + ten;
		count++;
	}while(a != b);
	cout << count;
	
	return 0;
}