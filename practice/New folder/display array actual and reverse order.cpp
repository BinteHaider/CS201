#include <iostream>
using namespace std;
main(){

// display and reverse order and actual order array in c

int array [5];
cout << " enter  5 integer in array" << endl ;
	for(int i =0 ; i < 5 ; i++){
		cin >>  array [i];
	} 
cout << "Actual order of array"<<endl;
		for(int i =0 ; i < 5 ; i++){
		cout <<  array [i] << " ";
	} 
cout << endl;
cout << "Reverse order of array" << endl;
for(int i = 4 ; i >= 0 ; i--){
		cout <<  array [i] << " ";
	} 

}

