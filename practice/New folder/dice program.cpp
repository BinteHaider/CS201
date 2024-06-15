#include <iostream>
#include <cstdlib> // library for random number
#include <ctime> // library for time function

using namespace std;
main(){

 srand(time(0)); 
 
 int dice = 0;
 int sides = 6 ;
 int roll = 10;
 //rane of rand -> 0..9999 % 12 --> range of dice 0 to 11 so add 1 -->> 1 to 12

 for (int i = 1 ; i <= roll ; i++){
 
 	dice= rand() % sides +1 ;
 	cout << "dice roll : "<< i << " --->\t "<< dice << endl;
  }


}
