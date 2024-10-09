#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.emplace(5);
    st.emplace(3);

    auto it1 = st.find(2);
    cout<<*(it1)<<endl;

    st.erase(5);
    
    int cnt = st.count(5);
    cout<<cnt;

    return 0;
}