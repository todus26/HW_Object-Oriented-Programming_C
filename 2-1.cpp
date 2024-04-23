//실습 2-1 : 실행 결과를 통해 분석하기
#include <iostream>
using namespace std;

int main() {
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; //2차원 배열
	int(*ptr)[3]; int* p; int** pt; // ptr : int형 변수로 이루어진 int형 포인터 배열
	ptr = M; //ptr = M의 주소
	cout << "ptr이 M의 주소를 가리킬 때" << endl;
	//배열의 이름은 해당 배열의 첫 번째 요소의 주소와 같음. 따라서 ptr과 M의 값은 동일
	cout << ptr << '\t' << M << endl;
	//1을 더하면 다음 행의 주소를 가리킴.
	cout << ptr + 1 << '\t' << M + 1 << endl;
	//두 번째 행의 주소 출력
	cout << *(ptr + 1) << '\t' << ptr[1] <<'\t' << *(M + 1) << '\t' << M[1] << endl;
	//두 번째 행의 첫 번쨰 요소 출력 M[1][0]과 같음
	cout << **(ptr + 1) << '\t' << **(M + 1) <<'\t' << *M[1] << '\t' << M[1][0] << endl ;

	//p는 첫 번째 행의 첫 번째 요소를 가리킴.
	cout << endl << "p가 첫 번째 행의 첫 번째 요소를 가리킬 때" << endl;
	p = M[0];
	//첫 번째 행의 주소
	cout << p << '\t' << M[0] << '\t' << *M << endl;
	//첫 번째 행의 두 번째 요소의 주소 출력, M[0][1]의 주소 같음.
	cout << p + 1 << '\t' << M[0] + 1 << '\t' << *M + 1 << endl;
	//첫 번째 행의 두 번째 요소 출력, M[0][1]과 같음
	cout << *(p + 1) << '\t' << *(M[0] + 1) << '\t' << *(*M + 1) << endl;

	//pt에 p의 주소 대입
	cout << endl << "pt에 p의 주소 대입" << endl;
	pt = &p; // pt = M; (X)
	cout << *pt << '\t' << p << endl;
	cout << **pt << '\t' << *p << endl;
}