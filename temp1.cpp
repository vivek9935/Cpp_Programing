#include<bits/stdc++.h>

using namespace std;

int lastIndex(int input[], int size, int x, int currIndex){
    //base condition
    if(currIndex== size){
        return -1;
    }

    int index = lastIndex(input,size,x,currIndex+1);
    
    if(index == -1 && input[currIndex] == x){
        return currIndex;
    }
    else{
        return index;
    }
}

int main(){
    int input[] = {9,8,10,8};
    int x = 8;
    int size = 4;
    cout<<lastIndex(input,size,x,0);

    return 0;
}