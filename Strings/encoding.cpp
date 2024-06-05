#include<iostream>
#include<string>

using namespace std;

string compresstring(string s){
    int n = s.length();
    // int cnt = 1;
    string output;
    for(int i = 0; i < n; i++){
        int count = 1;
        while(i < n-1 && s[i] == s[i+1]){
            i++;
            count++;
        }
        output += s[i];
        output += to_string(count);
    }
    if(output.length() > s.length()) return s;
    return output;

}

int main(){
    string s1 = "aabbccdddddddddddd";
    cout << compresstring(s1) << endl;
    string s2 = "abcd";
    cout << compresstring(s2) << endl;
    return 0;
}