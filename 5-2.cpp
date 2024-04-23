#include <iostream>
using namespace std;

class Oval {
private:
    int width, height;   // 정수값의 사각형 너비와 높이를 가지는 멤버 변수
public:
    Oval();              // 생성자1 : 매개변수 없음 - 너비와 높이값을 1로 초기화
    Oval(int a, int b);  // 생성자2 : 너비와 높이를 매개변수로 받음

    // 멤버 함수
    int getWidth();  
    int getHeight();  
    void set(int w, int h);  // 너비와 높이를 설정
    void show();             // 타원의 너비와 높이를 화면에 출력하는 함수

    ~Oval();       
};

Oval::Oval() { // 기보 생성자
    width = 1;
    height = 1;
}

Oval::Oval(int a, int b) {
    width = a;
    height = b;
}

int Oval::getWidth() {  // 타원의 너비를 리턴
    return width;
}

int Oval::getHeight() {  //타원의 높이를 리턴
    return height;
}

void Oval::set(int w, int h) {  // 타원의 너비와 높이 변경
    width = w;
    height = h;
}

void Oval::show() {  // 타원의 너비와 높이를 화면에 출력
    cout << "width = " << width << ", height = " << height << endl;
}

Oval::~Oval() {
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);   
    a.show();       
    cout << b.getWidth() << "," << b.getHeight() << endl; 

    return 0;
}
