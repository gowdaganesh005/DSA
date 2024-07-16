// https://leetcode.com/problems/sort-colors/description/  

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {

    //brute force any sorting algo merge sort of O(nlogn)
    //better appoach
    int n=nums.size();
    int cn0=0,cn1=0,cn2=0;
    for(auto i :nums){
        if(i==0) cn0++;
        else if(i==1) cn1++;
        else cn2++;

    }
    for(int i=0;i<cn0;i++) nums[i]=0;
    for (int i = cn0; i < cn0+cn1; i++) nums[i]=1;
    for(int i=cn0+cn1;i<n;i++) nums[i]=2;
    
    
    
        
}
void sortColors2(vector<int>& nums) {
    //optimal approach

    //Dutch national flag algo
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}


int main(){
    vector<int> v={1,2,0,0,2,1,2,2,1,1,0,0,0,2,1,2,1,0,1};
    sortColors2(v);
    for(auto it :v) cout<<it<<" ";
    return 0;
}
