//amazon (dice) number of ways to reach the target
#include<iostream>
using namespace std;
void ways_equal_tar(string p,int tar){
    if(tar==0){
        cout<<p<<endl;
    }
    for(int i=1;i<=6;i++){
        if(i<=tar){
            ways_equal_tar(p+to_string(i),tar-i);
        }
    }
}
int main(){
    string s="";
    int tar;
    cin>>tar;
    ways_equal_tar(s,tar);
}