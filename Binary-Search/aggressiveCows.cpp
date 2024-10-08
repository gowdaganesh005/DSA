#include<bits/stdc++.h>
using namespace std;
bool check(int k,vector<int> stalls,int i){
    int col=1,last=0;
    for(int j=1;j<stalls.size();j++){
        if((stalls[j]-stalls[last])>=i){
            last=j;
            col++;
        }
        if(col>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
   int l=1,h=stalls[stalls.size()-1]-stalls[0];
   while(l<=h){
       int mid=(l+h)/2;
       if(check(k,stalls,mid)){
           l=mid+1;
       }
       else{
           h=mid-1;
       }
   }
   return h;
}
int main(){
  vector<int> arr={25,46,28,49,24};
  cout<<aggressiveCows(arr,4);
  return 0;

}
