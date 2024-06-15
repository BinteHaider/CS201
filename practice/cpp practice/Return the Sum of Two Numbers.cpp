#include <iostream>

using namespace std;

/*Create a function that takes two numbers as arguments 
and returns their sum.
Examples
Sum(3, 2) = 5
Sum(-3, -6) = -9
Sum(7, 3) =10 */
 
 
 // Function declaration
int sum(int, int);
 
// Function definition
int sum(int a, int b) {
    int c = a + b;
    return c;
}
    
main (){
		
	// always initialize first to avoid confusion	
	char again ;
	int x, y, z;	
	
	do {
	

    cout << "Enter two numbers for sum: " << endl;
    cin >> x >> y;
    
	 z = sum (x,y); // function calling 
	 cout << "SUM IS :" << z << endl;
	 
	 cout << "Do you sum again " ;
	 cin >>  again ;
}
	while (again == 'y' || again == 'Y');

    	cout << "Thanks for using the sum program." << endl;
	 
		 
}
