#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m;
  
  while(cin>>n>>m){
    unordered_map<int,int> um;
    if(n==0&&m==0) break;
    int arr1[n];
    for(int i=0;i<n;++i){
      cin>>arr1[i];
    }
    int arr2[m];
    for(int i=0;i<m;++i){
      cin>>arr2[i]; 
    }

    for(int i=0;i<n;++i){
        um.insert(make_pair(arr1[i],1));
    }
    int count=0;
    for(int i=0;i<m;++i){
      if(um.find(arr2[i])==um.end()){
        um.insert(make_pair(arr2[i],1));
      }
      else{
        count++;
      }
    }
    cout<<count<<endl;
  }


  return 0;
}