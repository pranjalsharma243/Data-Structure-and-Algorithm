class Solution {
public:
void solve(string digits, vector<string> &mapping, vector<string> &ans,int index,string &output)
{
    //Base Case
    if(index>=digits.length())
    {
        ans.push_back(output);
        return;
    }
    int digit=digits[index]-'0';
    string value=mapping[digit];
    for(int i=0;i<value.length();i++)
    {
        char ch=value[i];
        output.push_back(ch);
        solve(digits,mapping,ans,index+1,output);
        //Backtrack
        output.pop_back();
    }


}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        return ans;
        vector<string> mapping(10);
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";
        int index=0;
        string output="";
        solve(digits,mapping,ans,index,output);

     return ans;
        
    }
};
