#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c){

	if(c==0) return (b==a);

	return ((b-a)%c==0&&(b-a)/c>=0);

}
int main(){

	int a,b,c;
	cin>>a>>b>>c;
	if(check(a,b,c)) cout<<"YES";
	else cout<<"NO";

 	return 0;
}