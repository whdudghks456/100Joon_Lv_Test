// OX퀴즈
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, count, sum;
	count = 0;
	cin >> a;
	
	string s;
	for(int i = 0; i < a; i++) {
		cin >> s;
		count = 0;
		sum = 0;
		for(int j = 0; j < s.length(); j++) {
			if(s[j] == 'O') count++;
			else count = 0;
			sum += count;
		}
		cout << sum << '\n';
	}
	
	return 0;
}