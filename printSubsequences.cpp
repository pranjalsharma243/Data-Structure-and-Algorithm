#include <iostream>
using namespace std;
void printSubsequences(string s,string output, int iterator)
{
//Base case 
if(iterator>=s.length())
{
  //We can also store it in a vector which can be passed by reference
  cout<<output<<" ";
  return;
}
//Exclude the character
printSubsequences(s,output,iterator+1);
//Include the character
printSubsequences(s,output+s[iterator],iterator+1);


}

int main() {
  string s="abc";
  string output="";
  int iterator=0;
  //Based on Inclusion and Exclusion
  printSubsequences(s,output,iterator);
  return 0;
}
