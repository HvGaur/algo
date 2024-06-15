//Address of the operator
#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int *xptr = &x;
    cout << xptr << endl;

    //address of the pointer variable itself
    cout << &xptr << endl;

    //Pointer to a Pointer
    int **xptrptr = &xptr;
    cout << xptrptr;
}