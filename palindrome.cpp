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
    int temp=N,temp1=N;
    while(temp>0){
        count++;
        temp/=10;
    }
    int rev1=reverse_number(N,count);
    if(temp1==rev1){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
}