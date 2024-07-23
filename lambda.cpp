#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    cout<<"\n";
    for_each(v.begin(),v.end(),[](int i){
        cout<<i<<" ";
    });
    cout<<"\n";
}
int main()
{
    vector<int>arr = {4,2,5,2,8,4,8};
    auto cmp = [](const int& a,const int& b){
        return a>b;
    };
    sort(arr.begin(),arr.end(),cmp);

    auto p = unique(arr.begin(),arr.end(),[](int a,int b){
        return a == b;
    });
    printvec(arr);

    return 0;
}