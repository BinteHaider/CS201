#include<iostream>
using namespace std;
main(){

// Marks = 18
// Comment: Division by zero is not handled.
// Comment: Compare with the solution file.

int input,sub,multi,choice,time,sum,loop,number;

time = 1;
input=0;
sum=0;
number=0;
sub=0;
multi=1;
choice=0;




	 			int numinator = 0 ;  // decelared variable
	 			int denominator=1;
	 			







	cout << " Hello I'm Areeba student id = (bc230403530)\n\n";
	cout << " SIMPLE CALCULATOR\n\n Welcome to the Main Menu\n\n ";
	cout << "1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Exit\n";
	cout << "Enter your choice:";
	cin >> choice ;
	
	
	
switch (choice) {
	
		
		case 1:
			cout << "how many number do you want to add?";
			cin >> input ; 
			for (loop=0 ; loop < input ; loop++  ){
	 			cout << "Enter Number" << time++ <<":";
	 			cin >> number ;
	 			sum = sum + number;
			}
				cout << sum << "\n" ;
			break;
			
		case 2:
			cout<< "how many number do you want to subtract?";
				cin >> input ; 
			for (loop=1 ; loop <= input ; loop++  ){
	 			cout << "Enter Number" << time++ <<":";
	 			cin >> number ;
	 			if ( loop == 1){
					sub = number;
	 	   	   } else {
	 	   	   		sub-= number ;
				 }
	 	   }
				cout << sub << "\n";
			break;
/* is if  ka kaam ye hai k firt time  loop chaly ga tw value first value sub me assigment hogy 
or second time loop chalyga tw first value se second value  minus hogy is tarah answer thk ayega */ 			
		case 3:
			cout << "how many number do you want to multiply?";
			cin >> input ; 
			for (loop=0 ; loop < input ; loop++  ){
	 			cout << "Enter Number" << time++ <<":";
	 			cin >> number ;
	 			multi = multi*number;
			}
				cout << multi << "\n" ;	
			break;
		case 4:
			cout << "how many number do you want to divide?";
				cin >> input ; 
			for (loop=1 ; loop <= input ; loop++  ){
	 			cout << "Enter Number" << time++ <<":";
	 			cin >> number ;
	 		
	 			if (loop == 1){	
	 		 		numinator = number ;
	 			} else {
				 	denominator = number;
				   }
				numinator = numinator / denominator ;  		
			}
				cout << numinator << "\n";
			break;
		case 5 : 
    		cout << "Thank you for using the calculator.";
   		 break;
		default: 
			cout << "please enter number from 1 to 5\n\n THANK YOU!";
   }
   
   }
