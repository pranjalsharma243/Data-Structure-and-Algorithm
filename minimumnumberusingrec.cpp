#include <iostream>
#include<limits.h>
using namespace std;
void findMini(int arr[],int n,int i,int& minii)
{
if(i>=n)
return;

if(arr[i]<minii)
{
  minii=arr[i];
}
findMini(arr,n,i+1,minii);





}

int main() {
  int arr[9]={10,30,21,44,50,32,17,19,66};
  int n=9;
  int i=0;
  int mini=INT_MAX;
  findMini(arr,n,i,mini);
  cout<<"Minimum number is: "<<mini;
  return 0;
}
