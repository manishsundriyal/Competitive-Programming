#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  while(cin>>size){
    if(size==0) break;

    int freq[101]={};
    for(int i=0;i<size;++i){
      int inp;
      cin>>inp;
      freq[inp]++;
    }
    bool flag = true;
    for(int i=0;i<101;++i){
      if(freq[i]>0){
        while(freq[i]--){
          if(flag) flag = false;
          else cout<<" ";
          cout<<i;
        }
      }
    }
    cout<<endl;

  }
  return 0;
}