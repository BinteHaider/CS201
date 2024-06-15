#include <iostream>
using namespace std;
main(){
	
	int age [100];
	int totalAge=0;
	int averageAge=0;
	int i;
	
	
	cout << "Program to find average age of 10 student \n \n";
	for(i=0 ; i<10 ;i++) {  
		cout << "please enter the student age \n";
		cin>> age[i]; 
	
	}
	
	for (i=0 ; i<10 ;i++){
		totalAge = totalAge+age[i];
	}
	

	cout << "TOTAL AGE  "<<	totalAge << "\n";
	
	
	averageAge = totalAge/ i; 
	
	cout << "Average age  " << averageAge <<endl;
	
	cout << "value of i " << i; // value of i 10 is liye arahi hai qk ye nmb of element hai 
	
	
	
	
	
	
	
}
