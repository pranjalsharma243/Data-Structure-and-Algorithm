#include <iostream>
using namespace std;
int partition(int* arr, int s, int e)
{
//put the pivot at its correct position that means count the elements smaller than that and place pivot after that
int pivotIndex=s;
int pivotElement=arr[s];
//count the number of elements lesser than pivot
int count=0;
for(int i=s+1;i<=e;i++)
{
  if(arr[i]<=pivotElement)
  {
      count++;
  }
}
//put it in correct index which is s+count
int correctIndex=s+count;
swap(arr[pivotIndex],arr[correctIndex]);
//update the new pivotIndex
pivotIndex=correctIndex;
//put all smaller elements to the left and larger to the right
int i=s;
int j=e;
while(i<pivotIndex && j>pivotIndex)
{
while(arr[i]<=pivotElement)
{
  i++;
}
while(arr[j]>pivotElement)
{
  j--;
}
//Two cases one to swap if not correct
//second to not swap if they are correct
if(i<pivotIndex && j>pivotIndex)
{
  swap(arr[i],arr[j]);
}


}


return pivotIndex;
}
void quickSort(int* arr,int s ,int e)
{
if(s>=e)
return;

int p=partition(arr,s,e);
quickSort(arr,s,p-1);
quickSort(arr,p+1,e);

}
int main() {
  int arr[15]={8,1,1,1,1,3,4,20,50,50,50,50,5,50,30};
  int n=15;
  int s=0;
  int e=n-1;
  quickSort(arr,s,e); 
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
  return 0;
}
