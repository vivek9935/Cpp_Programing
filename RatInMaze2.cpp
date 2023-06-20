#include <bits/stdc++.h>
using namespace std; 
bool isSafe(int newx,int newy,vector<vector<bool>>&vis,vector<vector<int>>&arr,int n)
{
    if((newx>=0&&newx<n)&&(newy>=0&&newy<=n)&&(vis[newx][newy]!=1)&&(arr[newx][newy]==1))
    return true;
    else
    false;
}
void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans,
           vector<vector<bool>> &vis, string path) {
  // base case
  if (x == n - 1 && y == n - 1)
  {
      ans.push_back(path);
      return ;
  }
  vis[x][y]=1;
  //down
  if(isSafe(x+1,y,vis,arr,n))
      solve(x+1,y,arr,n,ans,vis,path+'D');
  //left
  if(isSafe(x,y-1,vis,arr,n))
      solve(x,y-1,arr,n,ans,vis,path+'L');
  //right
  if(isSafe(x,y+1,vis,arr,n))
      solve(x,y+1,arr,n,ans,vis,path+'R');
  //down
  if(isSafe(x-1,y,vis,arr,n))
      solve(x-1,y,arr,n,ans,vis,path+'U');
   vis[x][y]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
   vector<vector<bool>>visited(n,vector<bool>(n,0));
   vector<string> ans;
   string path="";
   solve(0,0,arr,n,ans,visited,path);
   return ans;
}
//second approch
/*#include <vector>
#include <string>

bool isSafe(int newx, int newy, const vector<vector<bool>>& vis, const vector<vector<int>>& arr, int n) {
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (vis[newx][newy] != 1) && (arr[newx][newy] == 1))
        return true;
    return false;
}

void solve(int x, int y, const vector<vector<int>>& arr, int n, vector<string>& ans,
           vector<vector<bool>>& vis, string& path) {
    // base case
    if (x == n - 1 && y == n - 1) {
        ans.emplace_back(path);
        return;
    }
    vis[x][y] = true;

    vector<pair<int, int>> directions{{1, 0}, {0, -1}, {0, 1}, {-1, 0}};
    vector<char> moves{'D', 'L', 'R', 'U'};

    for (int i = 0; i < 4; ++i) {
        int newx = x + directions[i].first;
        int newy = y + directions[i].second;

        if (isSafe(newx, newy, vis, arr, n)) {
            path += moves[i];
            solve(newx, newy, arr, n, ans, vis, path);
            path.pop_back();
        }
    }

    vis[x][y] = false;

}

vector<string> searchMaze(vector<vector<int>>& arr, int n) {
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<string> ans;
    if (arr[0][0] == 0)
        return ans;
    string path;
    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}
*/