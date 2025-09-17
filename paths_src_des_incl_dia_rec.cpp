#include<iostream>
using namespace std;
void total_path_des(int row,int col,int cur_row,int cur_col,string p){
    //base condition
    if(cur_row==row-1&&cur_col==col-1){
        cout << p << "(" << cur_row << "," << cur_col << ")" << endl;
        return;
    }
    if(cur_row>=row||cur_col>=col||cur_row<0||cur_col<0){
        return;
    }
    // right operation
    total_path_des(row,col,cur_row,cur_col+1,p+"("+to_string(cur_row)+","+to_string(cur_col)+")");
    //bottom operation
    total_path_des(row,col,cur_row+1,cur_col,p+"("+to_string(cur_row)+","+to_string(cur_col)+")");
    //forward diagonal top operation
    total_path_des(row,col,cur_row-1,cur_col+1,p+"("+to_string(cur_row)+","+to_string(cur_col)+")");
    // forward diagonal bottom operation
    total_path_des(row,col,cur_row+1,cur_col+1,p+"("+to_string(cur_row)+","+to_string(cur_col)+")");
}
int main(){
    int row,col;
    cin>>row>>col;
    string p=" ";
    total_path_des(row,col,0,0,p);
}