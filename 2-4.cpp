//실습 2-4 : 공간에 대한 참조 리턴
#include <iostream>
using namespace std;
char& find(char a[], char c, bool& success);

int main() {
	char s[] = "Mike"; //주어진 문자열
	bool b = false; //문자를 찾았는지 여부
	char& loc = find(s, 'M', b); //find 함수 호출, 찾은 위치에 대한 참조를 loc에 저장
	if (b == false) { //못 찾으면
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	//찾았을 때
	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"(변경된 문자열)가 출력됨
}

//문자열에서 char c를 찾아 해당 위치에 대한 참조를 반환
char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; ++i) {
		if (a[i] == c) { //c에 해당하는 문자를 찾았을 때
			success = true;
			return a[i]; //찾은 위치에 대한 참조 반환
		}
	}
	//못 찾았을 때
	success = false;
	// 만약 c를 찾지 못했다면, 배열의 첫 번째 요소를 참조로 반환
	return a[0];

}