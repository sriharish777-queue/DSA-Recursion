#include<iostream>
using namespace std;
void selection_sort(int N,int arr[]){
    for(int i=0;i<N;i++){
        int min=i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    selection_sort(N,arr);
}