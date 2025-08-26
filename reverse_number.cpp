#include<iostream>
#include<math.h>
using namespace std;
int reverse_number(int N,int count){
    if(N<=0){
        return 0;
    }
    else{
        return (N%10)*pow(10,count-1)+reverse_number(N/10,count-1);
    }
}
int main(){
    int N;
    cin>>N;
    int count=0;
    int temp=N;
    while(temp>0){
        count++;
        temp/=10;
    }
    cout<<reverse_number(N,count);
}