#include <iostream>
#include <vector>
using namespace std;
int q=1;
int firstOcc(vector<int> &arr, int s, int e, int key)
{

    int mid = s + (e - s) / 2;
    //int ans;
    if (s > e)
    {
        return -1;
    }

    if (arr[mid] == key)
    {
        return mid;
        firstOcc(arr, s, mid - 1, key);
    }

    if (key > arr[mid]) // Right me jao
        firstOcc(arr, mid + 1, e, key);

    else
        firstOcc(arr, s, mid - 1, key);

    //return ans;
}
void printa(vector<int> &arr, int s, int e, int mid,int ans)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << "  ";
        // cout<<"   this is mid->   "<<mid<<"    end of mid";
    }
    cout << endl;
    cout<<mid<<"   "<<arr[mid]<<"     ans value is"<<ans<<endl;
}
int lastOcc(vector<int> &arr, int s, int e, int key)
{

    int mid = s + (e - s) / 2;
    int ans;
    printa(arr, s, e, mid,ans);
    int a;
    if (s == mid)
    {
        return -1;
    }

    if (arr[mid] == key)
    {   
        cout<<"number of time enter  "<<q++<<endl;
        ans = mid;
        a=lastOcc(arr, mid + 1, e, key);
        cout<<"value of a is "<<a<<endl;
        return mid;
    }

    if (key > arr[mid]) // Right me jao
        lastOcc(arr, mid + 1, e, key);

    else
        lastOcc(arr, s, mid - 1, key);


    

}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    int s = 0;
    int e = n - 1;
    p.first = firstOcc(arr, s, e, k);
    p.second = lastOcc(arr, s, e, k);
    cout<<lastOcc(arr, s, e, k)<<endl;

    return p;
}
int main()
{
    vector<int> v;
    v = {1, 2, 2, 6, 8, 9, 9, 10};
    int n = v.size();
    int k = 9;

    pair<int, int> a;
    a = firstAndLastPosition(v, n, k);
    cout << a.first << "  ";
    cout << a.second << endl;
}