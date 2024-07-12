#include <iostream>

using namespace std;

string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void intstring(int n)
{
    if (n == 0)
        return;
    int temp = n % 10;
    // cout << s[temp];
    intstring(n / 10);
    cout << s[temp] << " ";
}

int main()
{
    int n = 2021;
    intstring(n);
    return 0;
}