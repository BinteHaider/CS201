#include <iostream>
using namespace std;
main(){

int n;
int a[5];
int temp;

//	cout << "enter the lenght of array"<< endl ;
//	cin >> n;


	cout << "ENTER the element of array"<< endl;
	
	for (int i=0;i<5;i++){
		cin >> a[i];
	}
	
	// LOOP FOR ARRAY SORTING IN ASCENDING ORDER
	
	for (int i=0 ; i < 5; i++){   // FOR LOOP ME JO I OR J HAI INSY MURAD  INDEX NO HAI
		for  (int j=i+1; j < 5 ; j++){
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}

	cout << "Array element in ascending order is:  ";
	for (int i=0;i<5;i++){
		cout << "  " << a[i];
	}
	
	cout << endl;

	// LOOP FOR ARRAY SORTING IN DESCENDING ORDER
			
	for (int i=0 ; i < 5; i++){
		for  (int j=i+1; j < 5 ; j++){
			if (a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}

	cout << "Array element in DEscending order is:  ";
	for (int i=0;i<5;i++){
		cout << "  " << a[i];
	}
}
