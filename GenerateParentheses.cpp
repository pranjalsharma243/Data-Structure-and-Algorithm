class Solution {
public:
   void solve(int open,int closed,vector<string> &ans,string &output)
   {
       //Base case
       if(open==0 && closed==0)
       {
           ans.push_back(output);
           return;
       }
       if(open>0)
       {
           output.push_back('(');
           solve(open-1,closed,ans,output);
           output.pop_back();
       }
       if(closed>open)
       {
           output.push_back(')');
           solve(open,closed-1,ans,output);
           output.pop_back();
       }
   }
   
    vector<string> generateParenthesis(int n) {
        
        int open=n;
        int closed=n;
        vector<string> ans;
        string output="";
        solve(open,closed,ans,output);
        if(ans.size()==0)
        return ans;
        return ans;
    }
};
