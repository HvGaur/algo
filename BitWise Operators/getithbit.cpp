#include<iostream>

using namespace std;

int getIthBit(int bit, int n){
    int mask = (1<<bit);
    return (mask & n) > 0 ? 1: 0;
}

int main(){
    int n = 6;
    int bit = 0;
    cout << getIthBit(bit, n);
    return 0;
}