
// Cascading member-function calls with the this pointer. 
#include <iostream> 
#include "Time.h" // Time class definition 
using namespace std ; 

int main(){
	Time t ; // create Time object 
	
	t.setHour(18).setMinute(30).setSecond(22); // cascaded function calls 
	
	// output time in universal and standard format 
	cout<<"Universal time :"<<t.toUniversalString()<<endl;
	cout<<"Standard time :"<<t.toStandardString()<<endl ; 
	
	// cascaded function calls 
	cout <<"\n\n New standard time :"<< t.setTime(20,20,20).toStandardString() << endl; 
}
