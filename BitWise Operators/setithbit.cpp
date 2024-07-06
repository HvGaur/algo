#include<iostream>

using namespace std;

void setIthbit(int &n, int i){
    int mask = 1<<i;
    n = (mask|n);
}

int main(){

    int n = 5;
    int i = 3;
    setIthbit(n, i);
    cout << n;
    return 0;

}