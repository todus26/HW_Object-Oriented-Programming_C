//실습 2-3 : 사용자로부터 2개의 정수를 입력 받아 큰 값을 출력하는 프로그램 작성하기.
#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	else if (a > b) {
		big = a;
		return false;
	}
	else {
		big = b;
		return false;
	}
}
int main() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;
	else
		cout << "큰 수는 " << big << endl;

}