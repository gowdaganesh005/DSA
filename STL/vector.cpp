#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(54);
    v.emplace_back(67);

    v.insert(v.begin()+1,4,70);
    vector<int>::iterator i=v.begin();
    //for(i=v.begin();i<v.end();i++) cout<<*i<<" ";
    // int s=sizeof(v)/sizeof(int);
    // for(int i=0;i<s;i++) cout<<v[i]<<" ";
    
    //for(auto j=v.end()-1;j<v.begin();j--) cout<<*j<<" "; not possible

    v.erase(v.begin()+2);
    for(auto j=v.begin();j!=v.end();j++) cout<<*j<<" ";
    cout<<endl;
    v.erase(v.begin(),v.begin()+3);
    for(auto k=v.begin();k!=v.end();k++) cout<<*k<<" ";
    

    vector<pair<int,int>> v1;
    v1.push_back({6,7});
    v1.emplace_back(7,6);
    //int s=sizeof(v1)/sizeof(int);
    //for(int i=0;i<s;i++) cout<<v1[i].first<<" "<<v1[i].second<<" "<<endl;
    return 0;
}