//실습 1-4 : 문자들을 입력 받고 입력된 x의 개수를 화면에 출력
#include <iostream>
using namespace std;
int main() {
	char c[100];                                         //한 라인에 100개의 문자면 충분
	int count = 0;                                       //x의 개수 처음에는 0
	cout << "문자들을 입력하라(100개 미만)" << endl;

	cin.getline(c, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (c[i] == 'x')                                 //x를 입력 받을 때마다 
			count++;                                     //1 증가
	}
	cout << 'x' << "의 개수는" << count << endl;
}