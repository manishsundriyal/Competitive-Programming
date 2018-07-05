#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[2*size];
    int temp[size+1]={};
    for(int i=0;i<2*size;++i){
        cin>>arr[i];
    }
    int maxCnt = INT_MIN;
    int cnt=0;
    for(int i=0;i<2*size;++i){
        if(temp[arr[i]]==0){
            temp[arr[i]]++;
            cnt++;
        }
        else{
            temp[arr[i]]--;
            cnt-=1;
        }
        maxCnt = max(cnt,maxCnt);
    }
    cout<<maxCnt;

    return 0;
}