////실습 3-4 : 배열의 원소를 반대 순서로 뒤집는 함수 작성
//#include <iostream>
//using namespace std;
//
//// 배열의 원소를 반대 순서로 뒤집는 reverseArray() 함수
//template <typename T>
//void reverseArray(T* arr, int size) {
//    for (int i = 0; i < size / 2; ++i) {
//        // 배열의 원소를 반대 순서로 교환
//        T temp = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = temp;
//    }
//}
//
//int main() {
//    int x[] = { 1, 10, 100, 5, 4 };
//    reverseArray(x, 5);
//    for (int i = 0; i < 5; ++i)
//        cout << x[i] << ' '; // 4 5 100 10 1 출력
//    cout << endl;
//    return 0;
//}
