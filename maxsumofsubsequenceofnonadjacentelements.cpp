#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
void maxSumSubsequence(vector<int>& arr, int sum,int &maxi,int i)
{
if(i>=arr.size())
{
maxi=max(maxi,sum);
return;
}
// Solving when the element has to be included and added to the sum
//Ek case solve krenge baki recursion dekh lega :)
maxSumSubsequence(arr,sum+arr[i],maxi,i+2);//incrementing with 2 because we need to find the sum of non adjacent elements e.g 0 index, 2nd index
//Solving when we want to exclude the element (2nd choice) in this case we can increment by 1.
maxSumSubsequence(arr,sum,maxi,i+1); 



}
int main() {
  //maximum Sum of all non adjacent elements
  vector<int> arr{2,1,4,9};
  int sum=0;
  int maxi=INT_MIN;
  int i=0;
  maxSumSubsequence(arr,sum,maxi,i);
  cout<<maxi;
  return 0;
}
