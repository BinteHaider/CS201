#include <iostream>
using namespace std;


/*linear search means ham user k zariye  ik array banayegy  eg: {12 , 13 ,4 ,1}
 phir hamy ik key input userk zriye  k kis array ka index nmb chahiye
 tw agr wo 12 put kry tw answer 0 show hojaye jo 12 ki index value hai
 agr jo array hai usky ilawa koi key input kry jase 2 tw answer -1 show hopga*/

int linearsearch (int,int,int);

int linearsearch (int array[] , int n , int key){
	
	for (int i=0; i<n; i++){
		
	 	if( array[i] == key){
			return i;
	   }
	  		
       }
return -1;	
	
}



main(){

// LINEAR SEARCH 

int n , key;
cout <<"ENTER SIZE OF ARRAY"<<endl;
cin >> n ;

int array [n];
cout << "ENTER THE ELEMENT OF ARRAY" << endl;
for(int i=0; i < n ; i++) {
	cin >> array[i];	
}
 
// user se key le rh ho jiska index dhondna hai
cout<< "enter the value of key."<<endl;
cin >> key;

cout << "your index value is:  ";
cout << linearsearch(array,n,key) << endl << endl;
cout << "when you get answer -1 its means the key was not found in array." << endl;



}
