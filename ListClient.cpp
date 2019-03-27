#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 cout<<"Sizes before removal"<<endl;
 L1.insert(55,1);
 L1.insert(1023,2);
 L1.insert(43,3);
 L1.insert(657,4); 
 cout<<"L1 size = "<<L1.size()<<endl;
 
 L2.insert(756,1);
 L2.insert(2356,2);
 L2.insert(11,3);
 L2.insert(233,4);
 cout<<"L2 size = "<<L2.size()<<endl;;
 
 cout<<"Sizes after removal"<<endl;
 L1.remove(1);
 L2.remove(3);
 
 cout<<"L1 new size = "<<L1.size()<<endl;
 cout<<"L2 new size = "<<L1.size()<<endl;
 
 cout<<"View new data at postions"<<endl;
 cout<<"L1 at 1 = "<<L1.getAt(1)<<endl;
 cout<<"L2 at 3 = "<<L1.getAt(3)<<endl;

 cout<<"Clearing ADTs ....."<<endl;
 L1.clear();
 L2.clear();
}
