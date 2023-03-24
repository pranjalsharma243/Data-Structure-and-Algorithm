#include <iostream>
using namespace std;
void permutation(string &str,int i)
{
if(i>=str.length())
{
  cout<<str<<endl;
  return;
}
for(int j=i;j<str.length();j++)
{
swap(str[i],str[j]);
permutation(str,i+1);
//We are doing this because we are passing a string by reference and want the same string for next iteration-> backtracking
swap(str[i],str[j]);



}
}
int main() {
  string str="abc";
  int i=0;
  permutation(str,i);
  return 0;
}
