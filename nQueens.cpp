//nQueens problem
#include <iostream>
#include<vector>
using namespace std;
//printing all the solutions
void printSolution(vector<vector<char> > &board,int n)
{
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<board[i][j];
  }
  cout<<endl;
}
cout<<endl<<endl;
}

//Checking if the queen is safe at that place
bool isSafe(int row, int col,vector<vector<char> > &board,int n)
{
int i=row;
int j=col;
//checking in the left row 
while(j>=0)
{
if(board[i][j]=='Q')
{
return false;
}
j--;
}
 i=row;
 j=col;
//checking in upper left diagonal
while(i>=0 && j>=0)
{
  if(board[i][j]=='Q')
  {
    return false;
  }
  i--;
  j--;
}
i=row;
 j=col;
//checking in bottom left diagonal
while(i<n && j>=0)
{
  if(board[i][j]=='Q')
  {
    return false;
  }
  i++;
  j--;
}
//otherwise it is safe
return true;

}
void nQueens(vector<vector<char> > &board,int col,int n)
{
//Base case
if(col>=n)
{
  printSolution(board,n);
  return;
}
//We will solve one case that is placing queen in in column for each row
for(int row=0;row<n;row++)
{
if(isSafe(row,col,board,n))  //Checking if the queen is safe to place
{
board[row][col]='Q';         //Placing the queen 
nQueens(board,col+1,n);  //checking for next col
board[row][col]='-';           //backtrack
}
}
}

int main() {
  int n=4;
  //Create a board/ matrix of n*n
  vector<vector<char> > board(n,vector<char>(n,'-'));
  int col=0;
  nQueens(board,col,n);
  return 0;
}
