#include <iostream>
using namespace std;
main(){
	
	int num1 [5], num2 [5], i, equals = 0 ;
// input of 5 integers of first array

 	cout << "Please enter five integers for the first array" << endl ;
	for ( i = 0 ; i < 5 ; i ++){
		cin >> num1 [ i ] ;
   }
// input of 5 integers of 2nd array
cout << "Please enter five integers for the second array" << endl ;
	for ( i = 0 ; i < 5 ; i ++){
		cin >> num2 [ i ] ;
   }
 //display the elements of two arrays
 cout << "\n The values in the first array are : " ;
 	for ( i = 0 ; i < 5 ; i ++)
 		cout << "\t" << num1 [ i ] ;
 
 cout << "\n The values in the second array are : " ;
	for ( i = 0 ; i < 5 ; i ++)
		 cout << "\t" << num2 [ i ];
		 
 // compare the two arrays
 for ( i = 0 ; i < 5 ; i ++ ){ 
 	if ( num1 [ i ] != num2 [ i ] ){
 		 cout << "\n The arrays are not equal " ;
 		equals = 0 ; //set the flag to false
		break ; // break k baad jitni bhi statement hogi jis function me wo execute nh hogi 
 	}
 		equals = 1; //set flag to true
  }
  
  
 if (equals ==1)
 cout << "\n Both arrays are equal" ; 


}
