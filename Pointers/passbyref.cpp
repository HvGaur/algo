#include<iostream>
using namespace std;

//Pass by value
void ApplyTax(int money){
	float tax = 0.18;
	money = money - money*tax;
}

//Pass by reference
void ApplyTaxRef(int &money){
	float tax = 0.18;
	money = money - money*tax;
}

int main(){
	int income = 100;
	ApplyTax(income);
	cout << income << endl; //Output is still going to be 100
	
	ApplyTaxRef(income);
	cout << income << endl; //Output is going to be 92
}