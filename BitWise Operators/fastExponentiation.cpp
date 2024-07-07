#include<iostream>

using namespace std;

int fastExpo(int &a, int &n){
    int ans = 1;
    while(n>0){
        if(n&1){
            ans = ans * a;
        }
        a *= a;
        n = n >> 1;
    }
    return ans;
}

int main()
{

    int a = 3;
    int n = 5;
    cout << fastExpo(a,n);
    return 0;
}