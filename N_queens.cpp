#include<iostream>
#include<vector>
using namespace std;
bool safe(vector<string> &board,int N,int row,int col){
    //upper top
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //upper left diagonal
    int i=row-1,j=col-1;
    while(i>=0&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    //upper right diagonal
    int k=row-1,h=col+1;
    while(k>=0&&h<N){
        if(board[k][h]=='Q'){
            return false;
        }
        k--;
        h++;
    }
    return true;
    
}
void solve(int row,vector<string> &board,int N,vector<vector<string>> &ans){
    
    if(row==N){
        ans.push_back(board);
        return ;
    }
    for(int col=0;col<N;col++){
        if(safe(board,N,row,col)){
            board[row][col]='Q';
            //recursion for next row
            solve(row+1,board,N,ans);
            //backtrack
            board[row][col]='.';
        }
    }
}
int main(){
    int N;
    cin>>N;
    vector<string> board(N,string(N,'.'));
    vector<vector<string>> ans;
    solve(0,board,N,ans);
    
    for(auto &s:ans){
        for(auto &d:s){
            cout<<d<<endl;
        }
        cout<<"----"<<endl;
    }
}