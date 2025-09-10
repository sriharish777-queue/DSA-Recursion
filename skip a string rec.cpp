#include<iostream>
using namespace std;
string remove_string(string str,string target,string new_str,int index){
    if(index>=str.length()){
        return new_str;
    }
    if(str.substr(index,target.length())==target){
        return remove_string(str,target,new_str,index+target.length());
    }
    else{
        new_str=new_str+str[index];
        return remove_string(str,target,new_str,index+1);
    }
}
int main(){
    string s;
    cin>>s;
    string target;
    cin>>target;
    string s1="";
    cout<<remove_string(s,target,s1,0);
}