#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	 int i, j;
	 T key ;
    for (i = 1; i < N; i++) {
		cout << "Pass " << i << ":";
        key = d[i];
        j = i - 1;
 
        while (j >= 0 && d[j] < key) {
            d[j + 1] = d[j];
            j = j - 1;
        }
        d[j + 1] = key;
		for (int k=0; k < N; k++) cout << d[k] << " ";
		cout << "\n";
    }

}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
