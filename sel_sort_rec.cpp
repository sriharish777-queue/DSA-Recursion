#include<iostream>
using namespace std;
void selection_sort(int N,int arr[],int i,int j,int min){
    if(i==N-1){
        return;
    }
    if(j<N){
        if(arr[j]<arr[min]){
            min=j;
        }
        selection_sort(N,arr,i,j+1,min);
    }
    else{
        swap(arr[min],arr[i]);
        selection_sort(N,arr,i+1,i+2,i+1);
    }
    
    
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    selection_sort(N,arr,0,1,0);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}