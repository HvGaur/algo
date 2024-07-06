#include<iostream>

using namespace std;

class Bit{
public:
    void updateIthBit(int &n, int idx, int val){
        clearIthBit(n, idx);
        int mask = (val<<idx);
        n = mask | n;
    }
private:
    void clearIthBit(int &n, int idx){
        int mask = ~(1<<idx);
        n = mask & n;
    }
};

int main(){
    int n = 13;
    int i = 1; // the index
    int v = 1; //value to set it to
    Bit huh;
    huh.updateIthBit(n, i, v);
    cout << n;
    return 0;
}