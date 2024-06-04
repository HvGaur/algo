#include<iostream>

using namespace std;

int main(){
    char sentence[1000];
    char para[1000];
    cin.getline(sentence,1000); //stops at a new line or \n
    cin.getline(para, 1000, '#'); //stops at the specified character #
    cout << sentence << endl;
    cout << para;
}