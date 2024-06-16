#include<iostream>

using namespace std;

class Vector{
    //Data Members
    int *arr;
    int cs; //current size
    int ms; //maximum size

    //Constructor, Destructor, Methods
public:
    Vector(){                   //Constructor
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
    void push_back(int x){
        if(cs==ms){
            //create a temporary array and store the old array in it, make a new array twice the size and then copy the elements.. then delete the temp array.
            int *oldArr = arr;
            arr = new int[ms*2];
            for(int i = 0; i < cs; i++){
                arr[i] = oldArr[i];
            }
            //delete the array
            delete []oldArr;

        }
        arr[cs] = x;
        cs++;
    }

    void pop_back(){
        if(cs>=0) cs--;
    }
    bool isEmpty(){
        return cs == 0;
    }

    //Front(), Back(), At(i), size(), capacity() [] - Operator overloading
    int first(){
        return arr[0];
    }
    int last(){
        return arr[cs-1];
    }
    int At(int x){
        return arr[x];
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ms;
    }
    int operator[](int i){
        return arr[i];
    }
};

int main(){
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
}