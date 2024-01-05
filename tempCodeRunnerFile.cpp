#include<iostream>
using namespace std;
const int N = 5;

void inputMatrix(double [N][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[N][N]){
	for(int i = 0; i < N; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			cin >> A[i][j];
		}
	}
	
}

void findLocalMax(const double A[N][N], bool B[N][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (i==0 || j==0 || i==N-1 || j==N-1){
				B[i][j] = 0;
			}else {
				bool up = A[i][j] >= A[i-1][j];
				bool r = A[i][j] >= A[i+1][j];
				bool l = A[i][j] >= A[i][j-1];
				bool u = A[i][j] >= A[i][j+1];

				bool re = up&&r&&l&&u;
				if (re == true){
					B[i][j] = 1;
				}else {
					B[i][j] = 0;
				}
			}
		

		}
	}
}

void showMatrix(const bool B[N][N]){
	for(int i=0; i < N; i++){
		for(int j=0; j < N; j++){
			cout << B[i][j] << " ";
		}
		cout << '\n';
	}

}

