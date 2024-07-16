// https://leetcode.com/problems/majority-element/

#include<bits/stdc++.h>
using namespace std;


 int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            
                mpp[i]+=1;
            
            
        }

        for(auto it = mpp.begin();it!=mpp.end();it++){
            if(it->second>(nums.size()/2))
            return it->first;

        }
        return -1;
        
    }
    int majorityElement1(vector<int>& nums) {
        int n=nums.size();
        int ele=nums[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(cnt==0){
                ele=nums[i];
                cnt=1;
                
            }
            else if(nums[i]!=ele){
                cnt--;
            }
            else cnt++;
            
        }
        return ele;
        
    }

int main(){
    vector<int> v={7,6,5,4,5,5,5,53,2,5,5,5,5,3,5,5,5,4};
   int n = majorityElement1(v);

  
    cout<<n;
    return 0;
}
