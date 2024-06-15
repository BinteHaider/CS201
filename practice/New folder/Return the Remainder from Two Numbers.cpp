#include <iostream>
using namespace std;

//Return the Remainder from Two Numbers 
//Examples
//Remainder(1, 3) ? 1 , Remainder(3, 4) ? 3
//Remainder(-9, 45) ? -9, Remainder(5, 5) ? 0

int reminder ( int , int);
reminder ( int a , int b){
		int c;
		c=a%b;
	return c;	

}



main(){
	int a,b=0;
	int c;
		cout<< "Enter two number for Reminder";
		cin >>a>>b;
 cout << reminder(a,b);
	
	
	
}
