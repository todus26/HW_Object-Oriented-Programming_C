////실습 1-5 : 입력받은 2개의 문자열이 같은지 검사하는 프로그램
#include <iostream>
#include <string>
using namespace std;

int main() {
    char password1[100], password2[100];
    cout << "새 암호를 입력하세요 >> ";

    cin >> password1;
    cout << "새 암호를 다시 한 번 입력하세요 >> ";
    cin >> password2;

    if (strcmp(password1, password2) == 0)
        cout << "같습니다.";
    else
        cout << "다릅니다.";
}
