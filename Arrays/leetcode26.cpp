#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0,j=0;

       while(j<nums.size()){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
        j++;
       }
       return i+1;
    }
int main(){

    vector<int> v={1};
    
    auto num=removeDuplicates(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl<<num;
    return 0;

    
}