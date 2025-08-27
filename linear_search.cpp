#include<iostream>
using namespace std;
bool linear_search(int N,int arr[],int target,int index){
    if(index==N){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    else{
        return linear_search(N,arr,target,index+1);
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<linear_search(N,arr,target,0);
    
}