#include<iostream>
using namespace std;

int ** create2Darray(int rows, int cols){
	int ** arr = new int*[rows];
	for(int i = 0; i < rows; i++){
		arr[i] = new int[cols];
	}
	int value = 0;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = value++;
		}
	}
	return arr;
}

int main(){
	int r = 3;
	int c = 3;
	int **arrr = create2Darray(r,c);
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arrr[i][j]<< " ";
		}
        cout << endl;
	}
	return 0;
}