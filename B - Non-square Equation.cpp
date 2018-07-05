#include <bits/stdc++.h>
using namespace std;
long long find(int i){
    long long b=0;
    while(i>0){
        b+=i%10;
        i/=10;
    }
    return b;
}
int main() {

    long long n;
    cin>>n;
    long long num=100000;
    long long i=1;
    long long res=-1;

    
    while(i<=num){
  
        double x= (-i+sqrt(i*i+4*n))/2;
        
        long long x2=x;
        
        if(x2==x && find(x)==i){
            res = x;
            break;
        }

        i++;
    }

    
    cout<<res;
    return 0;
}