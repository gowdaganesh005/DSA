#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;
        if(p1.first>p2.first) return true;
        else return false;
        
}


int main(){
    priority_queue<int> pq;
    pq.push(67);
    pq.push(65);

    // multiset can contain the multiple elements unlike set

    set<int> s1; // set uset multiset
    s1.emplace(6);


    map<int,int> m; // key value pair and stores in the ordered based on the key of the value umap multimap
    m.emplace(56,66);

    pair<int,int> p[10]={{1,5},{2,6},{6,5}};
    sort(p,p+1,comp); // sorting using the compartor function which is self defined

    



    


}