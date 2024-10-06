// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description
//
//
#include<iostream>
#include<vector>
#include<climits>
#include<cmath>


using namespace std;
int caldivsum(vector<int>& nums,int d){
        int ans=0;
        for(int num:nums){
            ans+=ceil(num*1.0/d);
        }
        return ans;
    }
    int maxele(vector<int> nums){
        int maxe=INT_MIN;
        for(int num:nums){
            maxe=max(num,maxe);

        }
        return maxe;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxe=maxele(nums);
        int low=1,right=maxe;
        while(low<right){
            int mid=(low+right)/2;
            if(caldivsum(nums,mid)<=threshold){
                right=mid;
            }
            else{
                low=mid+1;

            }


        }
        return low;

    }



int main(){
  vector<int> nums={1,2,3,9};
   cout<<smallestDivisor(nums,6);
}
