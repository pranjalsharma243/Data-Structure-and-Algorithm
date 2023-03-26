#include <iostream>
using namespace std;
void solve(string str,int i,int &ans)
{
//base case
if(str[i]=='d')
{
ans=i;
return;

}

solve(str,i-1,ans);


}

int main() {
  string str="abdghie";
  int i=str.length()-1;
  int ans=0;
  solve(str,i,ans);
  cout<<ans;
  return 0;
}
