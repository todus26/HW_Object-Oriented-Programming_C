//컴퓨터의 주기억장치를 모델링하는 클래스

#ifndef RAM_H
#define RAM_H

class Ram {
private:
    char mem[100 * 1024]; // 100KB 메모리
    int size;
public:
    Ram();
    ~Ram(); 
    char read(int address); 
    void write(int address, char value); 
};

#endif 
