#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

void solve(vector<int> arr, int i,int sum,int& maxi)
{

if(i>=arr.size())
{
  maxi=max(maxi,sum);
  return;
}

sum=arr[i]+sum;
solve(arr,i+2,sum,maxi);
sum=sum-arr[i];
solve(arr,i+1,sum,maxi);

}


int main() {
  vector<int> arr{2,1,4,9};
  int i=0;
  int sum=0;
  int maxi=INT_MIN;
  solve(arr,i,sum,maxi);
  cout<<maxi;
  return 0;
}
