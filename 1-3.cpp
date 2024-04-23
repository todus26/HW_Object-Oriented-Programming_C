//실습 1-4 : 5개의 실수를 입력 받아 제일 큰 수를 출력하는 프로그램
#include <iostream>
using namespace std;
 
double biggest(double* a, int n) {
	double max = a[0];                    //최댓값을 임의로 첫 수로 설정
	for (int i = 0; i < n; i++) {         //행렬의 수만큼 반복
		if (max < a[i]) {                 //최댓값으로 설정된 값보다 다른 수가 크면 
			max = a[i];                   //최댓값을 다른 수로 교체
		}
	}
	return max;                           //최댓값 반환
}

int main() {
	double a[5];
	cout << "5개의 실수를 입력하라 : ";

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	cout << "제일 큰 수 = " << biggest(a, 5) << endl;
}