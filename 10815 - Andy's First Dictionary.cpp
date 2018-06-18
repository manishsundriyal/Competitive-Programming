#include<bits/stdc++.h>

using namespace std;

int main(){


    vector<string> dic;

    string str;
    while(cin>>str){

        int i=0;
        while(i<str.size())
        {

            string word="";
            while((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                word.push_back(tolower(str[i]));
                ++i;
            }

            if(word.size())
            dic.push_back(word);
            ++i;
        }
    }
    sort(dic.begin(), dic.end());
    for(int i=0;i<dic.size();++i){
        if(i==0){
            cout<<dic[i]<<endl;
        }
        else if(dic[i]!=dic[i-1]){
            cout<<dic[i]<<endl;
        }
    }

    return 0;
}