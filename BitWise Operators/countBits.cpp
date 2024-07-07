#include<iostream>

using namespace std;

int countBits(int &n){
    int bits = 0;
    while(n>0){
        if(n&1) bits++;
        n = n>>1;
    }
    return bits;
}

int countBitsFaster(int &n){
    int bit = 0;
    while(n>0){
        n = n&(n-1);
        bit++;
    }
    return bit;
}

int main(){
    int n = 1023;
    int bits = countBitsFaster(n);
    cout << bits;
    return 0;
}