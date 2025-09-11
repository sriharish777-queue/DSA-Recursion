#include<iostream>
using namespace std;
void sub_seq(string s,string s1,int index){
    if(index==s.length()){
        cout<<s1<<" ";
        return;
    }
    //Include the character
    sub_seq(s,s1+s[index],index+1);
    //Include the ascii
    sub_seq(s,s1+to_string(int(s[index])),index+1);
    //exclude the character
    sub_seq(s,s1,index+1);
}
int main(){
    string s;
    cin>>s;
    string str1="";
    sub_seq(s,str1,0);
}