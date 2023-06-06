#include <iostream>
using namespace std;
int calculate_ways(int steps)
{
if (steps <0 ) //Base case
 return 0;
if (steps == 0)
 return 1;
int ans = calculate_ways(steps-1) + calculate_ways(steps -2); 
 return ans;
}
int main()
{
    int steps =4;
    int ans = calculate_ways(steps);
    cout << "total ways" <<ans;
}

/* in order to climb up to 4th stair, below are the possible options
1+1+1+1
2+2
1+1+2
2+1+1
1+2+1
so overall there are 5 distint ways to reach the 4th stair if someone is allowed to jump to nth stair using 2 jumps and using a single jump*/