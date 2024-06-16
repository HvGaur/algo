#include<iostream>
#include<algorithm>
#include<vector>

using namespace std; 

int calcTotalMarks(vector<int> marks){
    int sum = 0;
    for(auto m: marks){
        sum += m;
    }
    return sum;
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;

    return calcTotalMarks(m1) > calcTotalMarks(m2);
}

int main(){
    vector<pair<string, vector<int>>> student_marks = {
        {"Harsh", {5,6,7}},
        {"Alex", {6,7,8}},
        {"Charlie", {1,20,3}},
        {"Bob", {8,10,10}}
    };

    sort(student_marks.begin(), student_marks.end(), compare);

    for(auto s: student_marks){
        cout << s.first << endl;
    }
}