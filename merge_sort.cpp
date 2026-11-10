#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //copy remaining ele
    for(;i<=mid;i++){
        temp.push_back(arr[i]);
    }
    for(;j<=high;j++){
        temp.push_back(arr[j]);
    }
    for(int k=0;k<temp.size();k++){
        arr[low+k]=temp[k];
    }
}
void merge_sort(vector<int> &arr,int low,int high){
    if(low<high){
    int mid=(low+high)/2;
    //left part partitioing
    merge_sort(arr,low,mid);
    //right part partitioning
    merge_sort(arr,mid+1,high);
    // merge sorted halfs
    merge(arr,low,mid,high);}
}
int main(){
    int N;
    cin>>N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    //paramters(arr,low,high)
    merge_sort(arr,0,N-1);
    for(int a:arr){
        cout<<a<<" ";
    }
}
