#pragma once       // 한 글자라도 바뀌면 다른 걸로 취급

#ifndef ADDER_H    // 심볼을 생성해서 재정의되는 것(중복해서 읽어오는 것) 방지, 정의되어 있으면 뛰어 넘음
#define ADDER_H

class Adder { // 덧셈 모듈 클래스
    int op1, op2;
public:
    Adder(int a, int b);
    int process();
};

#endif 
