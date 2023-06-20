#include<iostream>
#include<vector>
using namespace std;
void th(int n,vector<vector<int>>&ans,int x,int y,int z)
{
    if(n==0)
    return;
    if(n==1)
    {
        ans.push_back({x,z});
        return;
    }
    th(n-1,ans,x,z,y);
    ans.push_back({x,z});
    th(n-1,ans,y,x,z);

}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> ans;
    if(n==0)
    {
        return ans;
    }
    th(n,ans,1,2,3);
    return ans;
}
int main(){
    int n=3;
    vector<vector<int>>a;
    a=towerOfHanoi(3);
//         for (const auto& inner : a) {
//       for (const auto& item : inner) {
//           cout << item << " ";
//       }cout << endl;
//   }
for(int i=0;i<a.size();i++)
{
    for(int j=0;j<a[i].size();j++)
    {
        cout<<a[i][j]<<" ";
    }cout<<endl;
}
  
}