#include<bits/stdc++.h>

bool isDistinct(int endYear){

	int visited[10]={};

	while(endYear){
		visited[endYear%10]+=1;
		endYear/=10;
	}
	for(int i=0;i<10;++i){
		if(visited[i]>1) return false;
	}
	return true;

}
using namespace std;
int main(){

	int startYear;
	cin>>startYear;

	int endYear=startYear+1;
	while(1){

		if(isDistinct(endYear)){
			break;
		}

		++endYear;
	}
	cout<<endYear;

	return 0;
}