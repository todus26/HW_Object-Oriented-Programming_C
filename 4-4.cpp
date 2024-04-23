//// 실습 4-4 : 문자열 변경 프로그램
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;  //입력받을 문자들
//	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;  //문자열 입력 받기, &입력 전까지 여러 줄 입력 가능
//	getline(cin, s, '&'); 
//	cin.ignore();
//
//	string f, r;  // 검색, 대치할 문자열
//	cout << endl << "find: ";
//	getline(cin, f, '\n'); // 검색할 문자열 입력
//	cout << "replace: ";
//	getline(cin, r, '\n'); // 대치할 문자열 입력
//
//	int startIndex = 0;
//
//	while (true) {
//		int fIndex = s.find(f, startIndex);  //단어 찾기
//
//		if (fIndex == -1)
//			break; 
//		s.replace(fIndex, f.length(), r); 
//		startIndex = fIndex + r.length();
//	}
//	cout << s << endl;
//}