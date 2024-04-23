#include <iostream>
using namespace std;

class MyVector {
    int* mem;
    int size;
public:
    MyVector(int n, int va);
    void show();                          // 멤버 함수 : 배열의 크기와 내용을 화면에 출력
    ~MyVector() { delete[] mem; }
};

MyVector::MyVector(int n = 100, int val = 0) {  
    mem = new int[n]; 
    size = n;
    for (int i = 0; i < size; i++) mem[i] = val; 
}

void MyVector::show() { 
    cout << "size = " << size << endl; 
    for (int i = 0; i < size; i++) cout << mem[i] << ' '; 
    cout << endl;
}

int main() {
    int size, value;
    cout << "배열의 크기와 초기화할 값을 입력하시오>>  ";
    cin >> size >> value;
   
    MyVector arr1;                         // 매개변수를 전달하지 않은 경우, 크기가 100이고 초기값이 0인 배열
    MyVector arr2(size, value);    

    arr1.show(); 
    cout << endl;
    arr2.show(); 
}
