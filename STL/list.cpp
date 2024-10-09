#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(7);
    ls.push_front(4);
    ls.emplace_front(3);
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}