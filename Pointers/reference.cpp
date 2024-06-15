//reference variables

#include<iostream>

using namespace std;

int main(){
    //Normal case
    int x = 10;
    int y = x;
    x++;
    cout << "Normally: x = " << x << " and y = " << y << endl;

    //Using a reference variable
    int a = 10;
    int &b = x;
    a++; //or b++
    cout << "Using reference variables: x = " << a << " and y = " << b << endl;

    return 0;
}