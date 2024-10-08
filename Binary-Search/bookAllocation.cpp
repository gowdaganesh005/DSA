#include<bits/stdc++.h>
using namespace std;
int  allocate( vector<int> arr,int x){
    int stud=1,studentpages=0;
    for(int i=0;i<arr.size();i++){
        if((studentpages+arr[i])<=x){
            studentpages+=arr[i];
        }else{
            stud++;
            studentpages=arr[i];
        }

    }
    return stud;
}
int maxe(vector<int> arr,int n){
    int maxele=INT_MIN;
    for(int i=0;i<n;i++){
        maxele=max(arr[i],maxele);
    }
    return maxele;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int low=maxe(arr,n),high=sum;
    while(low<=high){
        int mid=(low+high)/2;
        if(allocate(arr,mid)<=m){
            high=mid-1;
        }
  
        else{
            low=mid+1;
        }
    }
    return low;

}
int main(){
  vector<int> arr={25,46,28,49,24};
  cout<<findPages(arr,5,4);
  return 0;
}
