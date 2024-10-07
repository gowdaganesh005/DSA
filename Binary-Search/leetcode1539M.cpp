#include<bits/stdc++.h>

using namespace std;
int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=arr[mid]-mid-1;
            if(missing<k){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
        return low+k;

    }
int main(){
  vector<int> arr={2,5,6,7};
  cout<<findKthPositive(arr,6);
  return 0;


  // finished

}
