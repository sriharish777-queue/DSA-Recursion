#include<iostream>
using namespace std;
int sum_of_digits(int N){
    if(N<=0){
        return 0;
    }
    else{
        return (N%10)+sum_of_digits(N/10);
    }
}
int main(){
    int N;
    cin>>N;
    cout<<sum_of_digits(N);
}