#include <iostream>
using namespace std;
main(){
	
	
//	int age1, age2;
// age1 = 12;
// age2 = 10;
// if (age1 > age2)
// cout << "Student 1 is older than student 2"; 

//-------------------------------------------------------------------------

/*Now let’s see the usage of relational operators by an example. There are two students
Amer and Amara. We take their ages from the user, compare them and tell who is
older?*/

  
	
//		int AmerAge, AmaraAge;
// //prompt the user to enter Amer’s age
//cout << "Please enter Amer  age " << endl;
// cin >> AmerAge;
// //prompt the user to enter Amara’s age
// cout << "Please enter Amara age " << endl ;
// cin >> AmaraAge;
// //perform the test
// if (AmerAge > AmaraAge ){
// 	cout << "Amer is older than Amara";
// }

//--------------------------------------------------------------------------------------------------




//int AmerAge, AmaraAge;
// //prompt the user to enter Amer’s age
//cout << "Please enter Amer’s age " << endl;
// cin >> AmerAge;
// //prompt the user to enter Amara’s age
// cout << "Please enter Amara’s age" << endl ;
// cin >> AmaraAge;
// //perform the test
// if (AmerAge > AmaraAge ){
// 	cout << "Amer is older than Amara";
// }
// 
// if (AmerAge < AmaraAge ){
//	cout << "Amer is younger than Amara";
// } 	

//------------------------------------------------------------------------------


// use of nor operator

//int age=0;
//
//	cout << "enter the student age " ;
//	cin >> age ;
//	
//	if ( ! (age > 18 )){
//		cout << "The age is less than 18";
//	}
//
//	if ( ! (age < 18 )) {
//		cout << "The age is greater  than 18";
//	}
  
//---------------------------------------------------------------------------------------------------------

/*A shopkeeper announces a package for customers that he will give 10 % discount on
all bills and if a bill amount is greater than 5000 then a discount of 15 %. Write a C
program which takes amount of the bill from user and calculates the payable amount
by applying the above discount criteria and display it on the screen. */

double amount, discount, netPayable ;
 amount = 0 ;
 netPayable = 0 ;
 discount = 0 ;
 
 // prompt the user to enter the bill amount
 cout << "Please enter the amount of the bill " ;
 cin >> amount ;
 //test the conditions and calculate net payable

 if ( amount >= 5000 ){
 	
 //calculate amount at 15 % discount
 	discount = amount * (15.0 / 100);
 	netPayable = amount - discount;
 	cout << "The discount at the rate 15 % is Rupees " << discount << endl;
 	cout << "The payable amount is Rupees " << netPayable ;
 } else{
 	
 // calculate amount at 10 % discount
 	discount = amount * (10.0 / 100);
 	netPayable = amount - discount;
 	cout << "The discount at the rate 10 % is Rupees " << discount << endl ;
 	cout << "The payable amount is Rupees " << netPayable ;
 } 




	
	
	
	
}
