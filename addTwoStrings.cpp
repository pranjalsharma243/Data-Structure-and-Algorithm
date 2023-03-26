class Solution {
public:
void addString1(string &num1,string &num2,int i, int j,string &ans,int carry)
{
  
  //Base case
  if(i<0 && j<0)
  {
      if(carry!=0)
      {
      ans.push_back(carry + '0');
      }
      return;
  }
 
  int n1=(i>=0 ? num1[i] : '0') -'0';
  int n2=(j>=0 ? num2[j] : '0') -'0';
  int csum=n1+n2+carry;
  int digit=csum%10;
  carry=csum/10;
  ans.push_back(digit + '0');
  addString1(num1,num2,i-1,j-1,ans,carry);
  
}
    string addStrings(string num1, string num2) {
      int i=num1.size()-1;
      int j=num2.size()-1;
      string ans="";
      int carry=0;
      addString1(num1,num2,i,j,ans,carry);
      reverse(ans.begin() , ans.end());
      return ans;
        
    }
};
