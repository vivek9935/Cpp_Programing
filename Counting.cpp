#include <iostream>
using namespace std;
int q = 1;
int count(int n)
{
    if (n < 1)
        return 1;
    // cout<<"print the counting"<<endl;
    // cout << n << endl;
    int a = count(n - 1);
    // cout << endl;
    // cout << n << endl;
    return a;
    cout << n << endl;
}
int main()
{
    int n = 5;
    cout << "Funtion call print kara raha hu" << endl;
    cout << count(n) << "  ";
    return 0;
}