#include <iostream>
#include<vector>
using namespace std;


/*Condtions which must be followed and these are
1.) It should be within index
2.) It must not have visited the index
3.) Value must be reachable which is 1*/

bool isSafe(int srcx,int srcy,int row,int col,int arr[][3],vector<vector<bool> > &visited)
 {
 if((srcx>=0 && srcx<row) && (srcy>=0 && srcy<col) && 
      (arr[srcx][srcy]==1) &&
      (visited[srcx][srcy]==0)
      )
      {
      return true;
      }
else
   {
  return false;
   }
 }

void solveMaze(int arr[][3],int row, int col,int srcx,int srcy,vector<string> &path, vector<vector<bool> > &visited, string output)
{
  //Base Case
  //when we have reached the ending index/the destination
  if(srcx==row-1 && srcy==col-1)
  {
    //store the result the path
    path.push_back(output);
    return;
  }
  //Have to solve 4 cases for the 4 movements the possible movements are Down, Left,Right,Up
  //Solving for down Movement which is srcx+1,srcy

  if(isSafe(srcx+1,srcy,row,col,arr,visited))
  {
    //We have visted srcx+1,srcy so mark it as true
    visited[srcx+1][srcy]=true;
    //recursive call
    solveMaze(arr,row,col,srcx+1,srcy,path,visited,output+'D');
    //Backtrack
    visited[srcx+1][srcy]=false;
  }


  //For left movement which is srcx,srcy-1
  if(isSafe(srcx,srcy-1,row,col,arr,visited))
  {
    //We have visted srcx+1,srcy so mark it as true
    visited[srcx][srcy-1]=true;
    //recursive call
    solveMaze(arr,row,col,srcx,srcy-1,path,visited,output+'L');
    //Backtrack
    visited[srcx][srcy-1]=false;
  }

   //For right movement which is srcx,srcy+1
  if(isSafe(srcx,srcy+1,row,col,arr,visited))
  {
    //We have visted srcx+1,srcy so mark it as true
    visited[srcx][srcy+1]=true;
    //recursive call
    solveMaze(arr,row,col,srcx,srcy+1,path,visited,output+'R');
    //Backtrack
    visited[srcx][srcy+1]=false;
  }
 
  //For Up movement which is srcx-1,srcy
  if(isSafe(srcx-1,srcy,row,col,arr,visited))
  {
    //We have visted srcx+1,srcy so mark it as true
    visited[srcx-1][srcy]=true;
    //recursive call
    solveMaze(arr,row,col,srcx-1,srcy,path,visited,output+'U');
    //Backtrack
    visited[srcx-1][srcy]=false;
  }


}

int main() {
  int arr[3][3]={{1,0,0},
                {1,1,0},
                {1,1,1}};
                int row=3;
                int col=3;
      //Edge case
      if(arr[0][0]==0)
      {
        cout<<"No path exists";
        return 0;
      }
  //For storing all the possible answers
   vector<string> path;
   //storing the possible option after each call
   string output="";
   //for tracking the paths which we have visited 
   vector<vector<bool> > visited(row,vector<bool>(col,false));
   visited[0][0]=1;
   solveMaze(arr,row,col,0,0,path,visited,output);
 //Edge case
   if(path.size()==0)
   {
     cout<<"No path exists";
     return 0;
   }
   for(auto i: path)
   {
     cout<<i<<" ";
   }
   cout<<endl;
   

  return 0;
}
