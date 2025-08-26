//print 1 to N using recursion
#include<iostream>
using namespace std;
void print_1_to_N(int N,int count){
    
    if(count==N+1){
        return;
    }
    else{
        cout<<count;
        print_1_to_N(N,count+1);
    }
}
int main(){
    int N;
    cin>>N;
    print_1_to_N(N,1);
}