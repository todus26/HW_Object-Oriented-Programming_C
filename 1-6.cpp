//실습 1-6 : 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100], address[100];
	int age;

	cout << "이름은? ";
	cin.getline(name, 100, '\n');

	cout << "주소는? ";
	cin.getline(address, 100, '\n');

	cout << "나이는? ";
	cin >> age;

	cout << name << ". " << address << ". " << age;
}