#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
private:
void solve(vector<int>& nums,vector<vector<int>>& ans,int index)
{
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    for(int j=index;j<nums.size();j++)
    {
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        //backtractking
        swap(nums[index],nums[j]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index =0;
        solve(nums,ans,index);
        return ans;
    }
};
int main(){
    Solution a;
    vector<int> b{1,2,3};
    vector<vector<int>>c=a.permute(b);
    for (const auto& inner : c) {
      for (const auto& item : inner) {
          cout << item << " ";
      }cout << endl;
  }
  cout<<endl;
  return 0;
}