#include <iostream>
#include <cstdlib> // library for random number
#include <ctime> // library for time function

using namespace std;
main(){

int i;

cout << time(0) <<endl; 
srand(time(0)); 
for (i=0 ;i < 10 ; i++) {
     
      
	cout << rand() % 6 + 1  << endl; 
	
/* ye rand() % 6 + 1 mujhy 1 to 6 tak hi koi random nmb show kryga mgr serf rand function
tw ye ik hi nmb bar bar dekhaye faida kuch nh naam ka random function tw ye proper use ho
islye ham srand function use krygy mgr only srand k use me bhi parameter jo nmb bataye har dafa ussy k around hi
random nmb show hoga jase me 50 likhogy tw ab hardafa 40 likogy hardafa 2 show hoga isliye mujhy isky under
time function use krna hoga isy me srand k parameter me likhogy tw har dafa random nmb show har milisecond me nmb
change hoga  */	                                      
	
}

}
