#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    //&bucket = address
    int *xptr = &x;

    cout << xptr << endl; // prints the address

    //*address = bucker
    cout << *xptr; // stores the bucket(value of x)
}