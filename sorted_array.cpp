#include<iostream>
using namespace std;
bool sorted_array(int N,int arr[],int index){
    if(index==N-1){
        return true;
    }
    if(arr[index]<arr[index+1]){
        return sorted_array(N,arr,index+1);
    }
    else{
        return false;
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<sorted_array(N,arr,0);
}