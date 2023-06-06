#include<iostream>
using namespace std;

void sourceTOdestination(int src, int dest)
{ //THIS IS AN EXAMPLE OF HEAD RECURSION (PROCESSING PART IN BW BASE AND RECURSIVE RELATION)
    cout << "Source "<<src <<" Destination "<< dest << endl;
    //Base case
    if (src==dest)
    return;
        //Recursive Relation
    sourceTOdestination(src, dest);
    // Processing
    src++;
//this will go into an infinite loop since src or the processing part for particlarly this case happens after the recursive calling
}
int main()
{int s=1;
int d=10;
sourceTOdestination(s,d);
return 0;
}