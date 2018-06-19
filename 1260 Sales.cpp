#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){

    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
      cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<size;++i){
      int count=0;
      for(int j=i-1;j>=0;--j){
        if(arr[j]<=arr[i]){
          count++;
        }
      }
      sum+=count;
    }
    cout<<sum<<endl;

  }
  return 0;
}