////실습 3-2-1 : big() 함수 중복하여 작성
//#include <iostream>
//using namespace std;
//
//int big(int a, int b) {
//	int max = 100;
//	int num1 = (a > b) ? a : b;
//	return (max > num1) ? num1 : max;
//}
//int big(int a, int b, int c) {
//	int max = 50;
//	int num2 = big(big(a, b), c);
//	return (max > num2) ? num2 : max;
//}
//
//int main() {
//	int x = big(3, 5);      // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
//	int y = big(300, 60);   // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
//	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
//	cout << x << ' ' << y << ' ' << z << endl;
//	return 0;
//}
