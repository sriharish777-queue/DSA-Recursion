//print N to 1 using recursion
#include<iostream>
using namespace std;
void print_N_to_1(int N){
    if(N==0){
        return;
    }
    else{
        cout<<N;
        print_N_to_1(N-1);
    }
}
int main(){
    int N;
    cin>>N;
    print_N_to_1(N);
}