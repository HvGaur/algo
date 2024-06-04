#include<iostream>

using namespace std;

int main(){
    char temp = cin.get();
    int length = 1;
    while(temp!='\n'){
        length++;
        cout << temp;
        temp = cin.get();
    }
    cout << endl << length;
    return 0;
}