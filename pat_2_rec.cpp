#include<iostream>
using namespace std;
void pattern(int N,int row,int col){
    if(row==N){
        return;
    }
    if(col<row+1){
        cout<<"*"<<" ";
        pattern(N,row,col+1);
    }
    else{
        cout<<endl;
        pattern(N,row+1,0);
    }
}
int main(){
    int N;
    cin>>N;
    int row=0,col=0;
    pattern(N,row,col);
}   