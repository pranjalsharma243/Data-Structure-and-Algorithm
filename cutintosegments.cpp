#include <iostream>
#include<limits.h>
using namespace std;
int solve(int n,int xlength,int ylength,int zlength)
{
if(n==0)
return 0;
if(n<0)
return INT_MIN;
int possibleWays1=solve(n-xlength,xlength,ylength,zlength)+1;
int possibleWays2=solve(n-ylength,xlength,ylength,zlength)+1;
int possibleWays3=solve(n-zlength,xlength,ylength,zlength)+1;

return max(possibleWays1,max(possibleWays2,possibleWays3));

}
int main() {
  //Max number of segments you can make from rod of length n.
  int n=7;
  int xlength=5;
  int ylength=2;
  int zlength=2;
  int ans=solve(n,xlength,ylength,zlength);
  if(ans<0)
    ans=0;
  cout<<ans;
  return 0;
}
