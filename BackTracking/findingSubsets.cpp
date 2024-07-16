#include<iostream>
#include<vector>

using namespace std;

void findSubsets(char *s, char* output, int i = 0, int j = 0 ){
    if(s[i] == '\0'){
        output[j] = '\0';
        cout << output << endl;
        return;
    }
    //rec calls

    //include i
    output[j] = s[i];
    findSubsets(s, output, i+1, j+1);

    //exclude i
    output[j] = '\0';
    findSubsets(s,output, i+1, j);
}

int main(){
    char s[] = "hel";
    char output[100];

    // vector<int> perm;
    findSubsets(s, output);
}