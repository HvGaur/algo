#include<iostream>
#include<string>

using namespace std;

int main(){
    //Strings are dynamic arrays
    string s("HELLO WORLD");
    string t = "hello world";
    cout << s << endl;
    cout << t << endl;
    string u; 
    getline(cin, u, '.');
    for(char ch: u){
        cout << ch << " ";
    }
}