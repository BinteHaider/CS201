#include <iostream>
using namespace std;
main(){

//character array 

 char text1 [6]= "hello" ;
 cout << sizeof(text1)<< endl;
 cout << sizeof(text1[2])<< endl;
 cout << text1<< endl;
 
  char text [1000];
  cout << "enter your input :";
 // .getline () ye 2 argument leta hai pahla us array ka naam dosra uska size 
 //OR YE character with gap input leta hai or stored krta hao  
  cin.getline(text,1000) ;
  cout<< "your output is: "<< text; 

}
