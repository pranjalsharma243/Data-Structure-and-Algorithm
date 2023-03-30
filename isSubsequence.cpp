class Solution {
public:
void subseq(string str,int i,string output,vector<string> &ans)
{
if(i>=str.length())
{
  ans.push_back(output);
  return;
}
subseq(str,i+1,output+str[i],ans);
subseq(str,i+1,output,ans);

}
    bool isSubsequence(string s, string t) {
        string output="";
       int i=0;
       vector<string> ans;
       subseq(t,i,output,ans);
       for(auto j: ans)
       {
           if(j==s)
           {
               return true;
           }
       }
       return false;
        
    }
};
