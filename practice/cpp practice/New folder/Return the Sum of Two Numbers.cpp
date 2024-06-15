#include <iostream>
using namespace std;

/*Create a function that takes two numbers as arguments and returns their sum.
Examples
Sum(3, 2) = 5, Sum(-3, -6) = -9, sum(7, 3) = 10*/

int sum(int,int); // deceration
sum(int a , int b){
	int c=0;
	
	c = a + b;
	return c;
}

main(){
	
	int a,b,c=0;
		cout << " Enter  two Number for sum :" << endl;
		cin >> a >> b ;
		cout << "the sum of "<< a <<" and "<<b<<" is:"<<sum( a,b); // <--- function calling
	
}


