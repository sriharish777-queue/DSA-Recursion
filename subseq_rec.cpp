#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void seq(string s,string res,int index,vector<string> &sub_seq){
    if(index==s.length()){
        sub_seq.push_back(res);
        return;
    }
    //Include the character
    seq(s,res+s[index],index+1,sub_seq);
    //exclude the character
    seq(s,res,index+1,sub_seq);
}
int main(){
    string s;
    cin>>s;
    vector<string> sub_seq;
    string ans="";
    seq(s,ans,0,sub_seq);
    sort(sub_seq.begin(),sub_seq.end());
    for(string s: sub_seq){
        cout<<s<<" ";
    }
}