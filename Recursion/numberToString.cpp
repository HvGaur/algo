#include<iostream>

using namespace std;

string strin(int n){
    switch (n)
    {
    case 1:
        return "one";
        break;
    case 2: 
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    default:
        break;
    }
    return "zero";
}

string numToString(int n, string s = ""){
    if(n==0){
        return s;
    }
    // string s = "";
    s = strin(n%10) + " " + s;
    return numToString(n/10, s);
    // return s
}

int main(){
    int num = 453454021;
    cout << numToString(num);
    return 0;
}