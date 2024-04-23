#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
    for (int i = 0; i < 100 * 1024; ++i) {
        mem[i] = 0;
    }
    size = 100 * 1024;
}

Ram::~Ram() {
    cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
    if (address < 0 || address >= size) {
        cout << "주소가 범위를 벗어납니다." << endl;
        return -1;
    }
    return mem[address];
}

void Ram::write(int address, char value) {
    if (address < 0 || address >= size) {
        cout << "주소가 범위를 벗어납니다." << endl;
        return;
    }
    mem[address] = value;
}
