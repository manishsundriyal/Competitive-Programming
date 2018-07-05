#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int amount;
    if(b<(m*a)){
        
        if(((n%m)*a)>b){
            amount = ((n/m) * b) + b; 
        }
        else{
            amount = (n/m) * b + ((n%m)*a);
        }
    }
    else{

        amount = n*a;

    }
    cout<<amount;
    return 0;
}