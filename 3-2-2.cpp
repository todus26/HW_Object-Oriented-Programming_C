////실습 3-2-2 : 디폴트 인자를 가진 하나의 함수 big() 
//#include <iostream>
//using namespace std;
//
//int big(int a, int b, int c = 100, int d = 50) {
//    int max;
//    if (c == 100) {
//        if (a > b)
//            max = a;
//        else
//            max = b;
//
//        if (c > max)
//            return max;
//        else
//            return c;
//    }
//    if (d == 50) {
//        if (a > b && a > c)
//            max = a;
//        else if (b > c)
//            max = b;
//
//        if (d > max)
//            return max;
//        else
//            return d;
//    }
//}
//
//int main() {
//    int x = big(3, 5);      // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
//    int y = big(300, 60);   // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
//    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
//    cout << x << ' ' << y << ' ' << z << endl;
//    return 0;
//}
//
