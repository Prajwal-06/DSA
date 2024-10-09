#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int , int> mpp;

    mpp.insert({1,1});
    mpp.insert({2,4});
    mpp.insert({6,36});

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}