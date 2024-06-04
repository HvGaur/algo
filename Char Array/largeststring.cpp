#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    cin.get();

    char sent[100];
    char largest[100];
    int maxlen = 0;

    while(n--){
        cin.getline(sent, 100);
        int len = strlen(sent);
        // maxlen = max(maxlen, len);
        if(maxlen < len){
            maxlen = len;
            strcpy(largest, sent);
        }
        
    }
    cout << "Largest String is: " << largest << "\nThe length is: " << maxlen << endl;
}