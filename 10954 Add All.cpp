#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int size;
    while(cin>>size){
      if(size==0) break;

      priority_queue<unsigned long long int, vector<unsigned long long int>, greater<unsigned long long int> > p;
      while(size--){
        unsigned long long int inp;
        cin>>inp;
        p.push(inp);
      }

      int cost=0;
      int sum=0;
      while(!p.empty()){
          
          sum = p.top();
          p.pop();
          if(p.empty()) break;
          sum+=p.top();
          p.pop();
          cost += sum; 
          p.push(sum);
      }
      cout<<cost<<endl;
    }

    return 0;
}
