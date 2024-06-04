#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string temp;
    vector<string> vect;
    cin.get();
    while(n--){
        getline(cin, temp);
        vect.push_back(temp);
    }
    for(string s: vect){
        cout << s << endl;
    }
    return 0;
}