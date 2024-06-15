#include <iostream>
using namespace std;
main(){

//int num = 0;

//
//    cout<<"Enter a number:";
//	cin>>num;
//
// 	if (num == 20) {
// 		
//        cout<<"User entered the number 20";
//	} else if (num <= 19){
//
//        	cout<<"User entered number is 19 or less";
//	  } else if (num >= 21) {
//
//        	cout<<"User entered number is 21 or greater";
//		}else if (num != 0){
//
//        	cout<<"User entered number is not zero";
//			}

//--------------------------------------------------------------------------------------------

int hsscMarks,interMarks;
	char faculty,documentVerifiedByIBCC;
	
	hsscMarks = 0;
	interMarks = 0;
		
	cout << " virtual univerty Admission form \n " ;
	cout << " Enter hssc marks";
	cin >> 	hsscMarks;
	
	if(hsscMarks >= 50) { 
	
		cout << "Enter intermarks ";
		cin >> interMarks ; 
		 
		if(interMarks >= 50  ){
		
			cout << "Enter faculty \n";
	 		cout << "for computer science faculty enter small c \n";
	 		cin >> faculty;	 
	 		
	 		
		    if(faculty == 'c' ){
			 	
				 cout << " your document verified by IBCC  ";
				 cout << " if your document verify enter y ";
	 			 cin >> documentVerifiedByIBCC ; 
	 
	 			if(documentVerifiedByIBCC == 'y' ){
				 	cout << "congratulations for addmision \n";
	 				cout << "WELCOME TO VIRTUAL UNIVERSITY";
				} else {
				  cout << " We are sorry that you cannot get admission in this university /n THANK YOU!";
				}
	  		} else { 
			  cout << "Addmission open only CS faculty";
			}
		} else {
			cout << "you are not eligible for Admission  because your marks less than 50" ; 
		}
	} else {
			cout <<"you are not eligible for Admission  because your marks less than 50" ; }























}
