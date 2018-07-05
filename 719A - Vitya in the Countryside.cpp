#include<bits/stdc++.h>
using namespace std;
int main(){

   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;++i){
        cin>>arr[i];
   }

   if(size==1){
    if(arr[0]==0){
        cout<<"UP";
    }
    else if(arr[0]==15){
        cout<<"DOWN";
    }
    else cout<<"-1";
   }
   else{
    if((arr[size-1]>arr[size-2])&&arr[size-1]!=15){
        cout<<"UP";
    }
    else if((arr[size-1]>arr[size-2])&&arr[size-1]==15){
        cout<<"DOWN";
    }
    else if((arr[size-1]<arr[size-2])&&arr[size-1]!=0){
        cout<<"DOWN";
    }
    else if((arr[size-1]<arr[size-2])&&arr[size-1]==0){
        cout<<"UP";
    }
   }

    return 0;
}