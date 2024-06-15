#include<iostream>

using namespace std;

int main(){
    int *xptr = 0; // null pointer
    int *xptrtwo = NULL;
    cout << xptr << endl << xptrtwo; 
    cout << *xptr; //segmentation error since null pointers dont point to anything
}