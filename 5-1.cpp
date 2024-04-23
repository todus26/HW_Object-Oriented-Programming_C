#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;  // 너비 저장
    int height; // 높이 저장

public:
    Rectangle();               // 생성자1 : 기본 생성자 - 너비와 높이를 0으로 초기화
    Rectangle(int w, int h);   // 생성자2 : 너비와 높이를 매개변수로 받아 초기화 (두 개의 매개변수 가짐)
    Rectangle(int s);          // 생성자3 : 정사각형일 경우에 사용하여 너비와 높이를 같은 값으로 초기화

    bool isSquare() const {     // 정사각형인지 확인
        return width == height; // 너비와 높이가 같을 경우(정사각형), true, 아닐 경우, false 반환
    }
};

Rectangle::Rectangle() {
    this->width = 1;
    this->height = 1;
}

Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
}

Rectangle::Rectangle(int width) {
    this->width = width;
    this->height = width;
}

int main() {
    Rectangle rect1;          
    Rectangle rect2(3, 5);   
    Rectangle rect3(3);      

    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
    return 0;
}

