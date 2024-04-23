//// 실습 4-1 : 5개의 string 배열 선언 후 문자열을 입력 받아 출력
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string strings[5];  //string 배열 선언
//
//    for (int i = 0; i < 5; ++i) {  //입력받기
//        cout << "이름 >>  ";
//        getline(cin, strings[i]);
//    }
//
//    for (int i = 0; i < 4; ++i) {   //문자열 크기 비교
//        for (int j = i + 1; j < 5; ++j) {  
//            if (strings[i] > strings[j]) {
//                string temp = strings[i];
//                strings[i] = strings[j];
//                strings[j] = temp;
//            }
//        }
//    }
//
//    cout << "사전에서 가장 뒤에 나오는 문자열은 " << strings[4];
//
//    return 0;
//}
//
