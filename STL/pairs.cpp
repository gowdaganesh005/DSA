#include<bits/stdc++.h>

using namespace std;

class a{
    public:
    int arr[10];

    a(int b[]){
        for(int i=0;i<10;i++)
        arr[i]=b[i];
    }
};

int main(){

    pair<int ,int> p={12,45};
    cout<<p.second<<endl;
    /////////////////////////
    //pair<int[],int[]> p3={{1,2,5,4},{3,6,7,3}};   not possible

    int arr2[10]={2,3,5,6,7},arr3[10]={3,6,7,4,5,6};

    

    a obj1(arr2),obj2(arr2);
    pair<a,a> p2={obj1,obj2};

    int arr4[10];
    int size =sizeof(p2.second.arr)/sizeof(int);
    for(int i=0;i<size;i++) arr4[i]=p2.second.arr[i];

    for(int i=0;i<size;i++) cout<<arr4[i]<<" ";
    return 0;
}