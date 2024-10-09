#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(0);
    d.push_back(1);
    d.emplace_back(2);
    
    d.push_front(-1);
    d.emplace_front(-2);

    d.pop_back();
    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back();
    return 0;
}