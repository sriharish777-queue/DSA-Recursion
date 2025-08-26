#include<iostream>
#include<math.h>
using namespace std;
int count_steps(int N){
    if(N==0){
        return 0;
    }
    int count=0;
    if(N%2==0){
        count++;
        return count+count_steps(N/2);
    }
    else{
        count++;
        return count+count_steps(N-1);
    }
        
    
}
int main(){
    int N;
    cin>>N;
    cout<<count_steps(N);
}