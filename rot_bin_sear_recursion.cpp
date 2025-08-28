#include<iostream>
using namespace std;
bool rot_bin_search(int N,int arr[],int tar,int low,int high){
    int mid=(low+high)/2;
    if(arr[mid]==tar){
        return true;
    }
    if(low>high){
        return false;
    }
    //Check if the left half is sorted
    if(arr[low]<arr[mid]){
        //whether target lies in left half
        if(arr[low]<=tar&&tar<arr[mid]){
            return rot_bin_search(N,arr,tar,low,mid-1);
        }
        else{
            return rot_bin_search(N,arr,tar,mid+1,high);
        }
    }
    //right half is sorted
    else{
       if(arr[mid]<tar&&tar<=arr[high]){
           return rot_bin_search(N,arr,tar,mid+1,high);
       } 
       else{
           return rot_bin_search(N,arr,tar,low,mid-1);
       }
    }
    
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int a=rot_bin_search(N,arr,tar,0,N-1);
    if(a==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}