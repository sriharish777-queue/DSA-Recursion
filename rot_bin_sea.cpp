#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int low=0,high=N-1,c1=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==tar){
            cout<<"Found ";
            c1++;
            return 0;
        }
        if(arr[low]<arr[mid]){
            if(arr[low]<=tar&&tar<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<tar&&tar<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }}
        if(c1==0){
            cout<<"Element not found";
        }
        
    
}