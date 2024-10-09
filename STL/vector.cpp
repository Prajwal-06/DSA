#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);

    for(auto it : v){
        cout<<it<<" ";
    }

    cout<<endl;
    //delete
    v.erase(v.begin() , v.begin()+3);
    for(auto it : v){
        cout<<it<<" ";
    }

    cout<<endl;
    //Insert Function
    vector<int> v1(2,100);
    v1.insert(v1.begin() , 300);
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+1 , 2 , 10 );
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;
    v1.pop_back();
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<"\n"<<v1.size();

    return 0;
}