class Solution {
public:
void solve(vector<string> &ans,int index,string digits,string output,unordered_map<int,string> &mapping)
{
//Base case
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
    solve(ans,index+1,digits,output+ch,mapping);

}
}


    vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.length()==0)
    return ans;
    int index=0;
    string output="";
    unordered_map<int,string> mapping;
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    solve(ans,index,digits,output,mapping);
    return ans;
        
    }
};
