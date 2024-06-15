#include <iostream>
#include <cstdlib> // library for random number
#include <ctime> // library for time function
using namespace std;
main(){

 	/*int z, i ;
 	int a [ 100 ] ;
 	int found = 0 ;
 	
// Initializing the array.
 	for ( i =0 ; i < 100 ; i ++ ){
 		a [ i ] = i ;
 	}
 		cout << "Please enter a positive integer " ;
 		cin >> z ;

 // loop to search the number.
 	for ( i = 0 ; i < 100 ; i ++ ){
 		if ( z == a [ i ] ){
 			found = 1 ;
 			break ;
 		}
 	}
 		if ( found == 1 ){
 
 			cout << "We found the integer at index " << i ;
 		}else
 			cout << " The number was not found " ; */
 //===========================================================================================
 
 
 /*int z, i ,tyrNum3; char continueSearch;
 int a [ 100 ] ;
 // Initializing the array.
 for ( i =0 ; i < 100 ; i ++ )
 {
 a [i] = rand() ; // value of rand 0 to 32767
 }
 
 do{
 
 
 cout << " Please enter a positive integer  " ;
 cin >> z ;
 int found = 0 ;
 // loop to search the number.
 for ( i = 0 ; i < 100 ; i ++ )
 {
 if ( z == a [ i ] )
 {
 found = 1 ;
 break ;
 }
 }
 if (found == 1) {
            cout << "We found the integer at position " << i << endl;
        } else {
            cout << "The integer was not found in the array." << endl;
        }

        cout << "Do you want to try again? (Y/N): ";
        cin >> continueSearch;

    } while (continueSearch == 'Y' || continueSearch == 'y'); */
    
    
    
 int z, i ,tyrNum3; char continueSearch;
 int a [ 100 ] ;
 // Initializing the array.
 
  srand(time(0));
 for ( i =0 ; i < 100 ; i ++ )
 {
 a [ i ] = rand() % 6 + 1   ; // value of rand 0 to 32767
 }
 
 
 cout << " Please enter a positive integer  " ;
 cin >> z ;
 int found = 0 ;
 // loop to search the number.
 for ( i = 0 ; i < 100 ; i ++ )
 {
 if ( z == a [ i ] )
 {
 found = 1 ;
 break ;
 }
 }
 if (found == 1) {
            cout << "We found the integer at position " << i  << " and your integer is: " << z << endl;
        } else {
            cout << "The integer was not found in the array." << endl;
        }

    
}