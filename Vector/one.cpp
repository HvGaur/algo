#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    arr.push_back(7); //beyond capacity; capacity doubles, and reallocation happens

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    arr.pop_back(); // removes the last element

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    return 0;
}