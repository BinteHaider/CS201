#include <iostream>
using namespace std;

	int square(int); // deceration
	int square(int number){ // define
 int result = 0;
 result = number * number;
 return result;
 } 
  //function for add
 int add (int,int);
 int add (int a, int b){
 	
 	int c;
 	 c = a + b ;
 	 return c ; }
 	
	//Function declaration
double raiseToPow ( double , int ) ;
 	 // function to calculate the power of some number
 	 
 	 
 	 
 double raiseToPow ( double x , int power ) {
 
 double result ;
 int i ;
 
 result = 1.0 ;
 
 for ( i = 1 ; i <= power ; i ++ )
 {
 result *= x ; // same as result = result * x
 }
 return ( result ) ;
 }
 	
 	
// function declaration.
int isEven(int);
 
 // define
 
 int isEven ( int number )
{
 if ( 2 * ( number / 2 ) == number )
 {
 return 1;
 }
 else
 {
 return 0;
 }
} 
 
main(){
	

//
// int number, result;
// result = 0;
// number = 0;
// // Getting the input from the user
// cout << " Please enter the number to calculate the square ";
// cin >> number;
//
// // Calling the function square(int number)
// result = square(number);
// cout <<  "The square of " << number << " is " << result; 

//-------------------------------------------------------------------------------------------------------------------------------------------

//
//int x, y ,c;
//
// // Getting the input from the user
// cout << " Please enter the number  " << endl;
// cin >> x;
// // Getting the input from the user
// cout << " Please enter the number  " << endl;
// cin >> y;
//  c = add (x,y );
//  cout << c ;
// 
// ---------------------------------------------------------------------------------------------------------------------------




//
//double x ;
// int i ;
// cout << " Please enter the number " ;
// cin >> x ;
// cout << " Please enter the integer power that you want this number raised to " ;
// cin >> i ;
// cout << x << "raise to power " << i << " is equal to " << raiseToPow ( x , i ) ; 
//-----------------------------------------------------------------------------------------------------------------------
//
//int number;
//
// cout << " Please enter the number: " ;
// cin >> number ;
//
// if ( isEven ( number ) )
// {
// cout << " The number entered is even " << endl;
// }
// else
// {
// cout << " The number entered is odd " << endl;
// } 
//
//
//-------------------------------------------------------------------------------------------------------------------------------

}
