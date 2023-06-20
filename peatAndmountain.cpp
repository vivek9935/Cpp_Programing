#include <vector>
#include <iostream>
#include<limits.h>
using namespace std;
void printa(vector<int> &v,int s,int e)
{
	for(int i=s;i<=e;i++)
	cout<<v[i]<<"  ";
	cout<<endl;
}
	int find_pivot(vector<int> &v, int s, int e,int n)
	{    
		
		int mid=s+(e-s)/2;
		printa(v,s,e);
     if(s>=e)
	 return s;
		
		if(v[mid]<v[mid+1])
		{
			find_pivot(v, mid+1,e,n);
		}
		if(v[mid]>v[mid+1])
		{
			
         find_pivot(v, s,mid,n);
		}
		
	}
int main()
{

	vector<int> arr{1, 2, 3, 4, 5, 3, 2};
        int s = 0;
		int e = arr.size() - 1;
		int n=arr.size();
		cout<<find_pivot(arr, s, e,n)<<endl;
		
			
}