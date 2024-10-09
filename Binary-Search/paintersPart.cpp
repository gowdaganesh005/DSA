// https://leetcode.com/problems/split-array-largest-sum/description/

#include<bits/stdc++.h>
using namespace std;
int allocate(vector<int> nums,int x){
        int sub=1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=x){
                sum+=nums[i];
            }
            else{
                sub++;
                sum=nums[i];
            }
            }
            return sub;

    }
    int maxele(vector<int> arr){
        int maxe=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxe=max(maxe,arr[i]);
        }
        return maxe;
    }
    int splitArray(vector<int>& nums, int k) {
        int high=0;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        int low=maxele(nums);
        while(low<=high){
            int mid=(low+high)/2;
            if(allocate(nums,mid)<=k){
                high=mid-1;

            }else{
                low=mid+1;

            }
        }
        return low;
    }

int main(){
  vector<int> arr={20,40,40,50,20};
  cout<<splitArray(arr,2);
  return 0;
}
