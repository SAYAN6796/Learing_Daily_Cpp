#include<iostream>
using namespace std;

void sourceTOdestination(int src, int dest)
{ //THIS IS AN EXAMPLE OF TAIL RECURSION (PROCESSING PART IN BW BASE AND RECURSIVE RELATION)
    cout << "Source "<<src <<" Destination "<< dest << endl;
    //Base case
    if (src==dest)
    return;
    // Processing
    src++;
    //Recursive Relation
    sourceTOdestination(src, dest);

}
int main()
{int s=1;
int d=10;
sourceTOdestination(s,d);
return 0;
}