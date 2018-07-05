#include<bits/stdc++.h>
using namespace std;
int main(){

   int size;
   cin>>size;
   int arr[size];
   bool check = false;
   for(int i=0;i<size;++i){
        cin>>arr[i];
        if(arr[i]==1){
            check = true;
        }
   }
   if(check) cout<<"-1";
   else cout<<"1";

    return 0;
}