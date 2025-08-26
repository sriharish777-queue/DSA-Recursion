#include<iostream>
using namespace std;
int pro_of_digits(int N){
    if(N<=0){
        return 1;
    }
    else{
        return (N%10)*pro_of_digits(N/10);
    }
}
int main(){
    int N;
    cin>>N;
    cout<<pro_of_digits(N);
}