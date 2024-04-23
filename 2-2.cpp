//실습 2-2 : 레퍼런스 매개 변수를 통해 평균과 함수의 성공 여부 리턴
#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if (size == 6) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
		}
		avg = sum / size;
		return true;
	}

	else {
		return false;
	}
}

int main() {
	int x[] = { 0, 1, 2, 3, 4, 5 };
	int avg;
	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, 4, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
}