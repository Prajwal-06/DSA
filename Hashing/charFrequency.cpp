#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int hash[25] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]-'a'] +=1;
    }

    int q;
    cin>>q;
    while(q--){
        char t;
        cin>>t;
        cout<<hash[t-'a']<<endl;
    }
    return 0;
}
