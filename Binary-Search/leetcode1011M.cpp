// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

#include<bits/stdc++.h>
using namespace std;

    int caldays(vector<int> ww,int cap){
        int cnt=0,ans=0;
        for(int w:ww){
            if((ans+w)<=cap){
                ans+=w;
            }
            else{
                cnt++;
                ans=w;
            }
        }
        cnt++;
        return cnt;
    }
    int maxele(vector<int> w){
        int maxe=INT_MIN;
        
        for(int a:w){
            maxe=max(maxe,a);
        }
        return maxe;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int w: weights){
            sum+=w;
        }
        int low=maxele(weights);
        int high=sum;
        while(low<high){
            int mid=(low+high)/2;
            if(caldays(weights,mid)<=days){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
int main(){
  vector<int> weights={1,2,2,1,2,2,9};
  cout<<shipWithinDays(weights,5);
  return 0;


}
