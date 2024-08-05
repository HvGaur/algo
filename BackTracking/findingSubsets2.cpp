#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

void findSubsets(char *s, char* output, vector<string>& list ,int i = 0, int j = 0 ){
    if(s[i] == '\0'){
        output[j] = '\0';
        // cout << output << endl;
        string temp(output);
        list.push_back(temp);
        return;
    }
    //rec calls

    //include i
    output[j] = s[i];
    findSubsets(s, output, list,  i+1, j+1);

    //exclude i
    output[j] = '\0';
    findSubsets(s,output, list, i+1, j);
}

int main(){
    char s[] = "hel";
    char output[100];
    vector<string> list;

    // vector<int> perm;
    findSubsets(s, output, list);

    sort(list.begin(), list.end(), compare);

    for(auto ch: list){
        cout << ch << ", ";
    }
}