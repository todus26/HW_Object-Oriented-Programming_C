//실습 1-2 : cout과 << 연산자를 이용하여 구구단 출력 프로그램 작성
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {              //첫 수 결정
		for (int j = 1; j < 10; j++) {          //두 번째 수 결정
			cout << i << "x" << j << "=" <<i*j<<"\t";
		}
		cout << endl;                           //단이 바뀔 때마다 엔터
	}
}