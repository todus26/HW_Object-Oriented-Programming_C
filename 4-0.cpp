//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string a = "dhfkadkfhhwoiejf";
//    string b = "dfsd";
//    string c = "dafdfa";
//    cout << &a << '\n' << sizeof(a) << '\n' << sizeof(b) << endl << sizeof(c);
//}
//
//
////출력시 40이 나오는 이유는 64비트 머신에서 16진수로 40이 표현되었기 떄문.
//
//
////문자열 15개 이하의 경우, 자기가 갖고 있는 버퍼에 따로 갖고 있음 -> 효율적인 메모리 사용
////15글자가 넘을 경우 저장을 위해 메모리에 동적할당을 한후 그 메모리 주스를 가리킴.
//
///*cout << &a <<
// 주소 출력해보기, 사이즈도 출력해보기
//*/
//
//
