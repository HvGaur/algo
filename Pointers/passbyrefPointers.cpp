#include<iostream>
using namespace std;

void WatchVid(int *viewsptr){
    *viewsptr = *viewsptr + 1; //dereference operator
}


int main(){
    int views = 100;
    WatchVid(&views);
    cout << views; //should increment by one
}