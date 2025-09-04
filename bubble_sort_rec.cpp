#include<iostream>
using namespace std;
void bubble_sort(int N,int arr[],int i,int j){
    if(i==N-1){
        return;
    }
    if(j<N-i-1){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        bubble_sort(N,arr,i,j+1);
    }
    else{
        bubble_sort(N,arr,i+1,0);
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    bubble_sort(N,arr,0,0);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}