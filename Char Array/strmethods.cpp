#include<iostream>

using namespace std;

int main(){
    char a[100] = "Apple";
    char b[100];

    //length
    cout << strlen(a) << endl;

    //strcpy
    strcpy(b,a);
    cout << b << endl;

    //strcat
    cout << strcat(b,a) << endl;

    //strcmp
    cout << strcmp(b,a) << endl;
}