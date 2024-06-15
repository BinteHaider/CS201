#include <iostream>
using namespace std;
main(){

int x , *p;
float y , *p1;
double z , *p2;

cout << "ENTER A VALUE" << endl;
cin>>x>>y>>z;

p= &x;

cout << "adress" << p <<"\t" << *p;



}
