#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "java is best";
    cout<<"before reverse"<<endl;
    cout<<str<<endl;
    cout<<"after reverse"<<endl;
    string temp="";
    stack<string> st;
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]==' '){
            st.push(temp);
            temp="";
        }
        else{
            temp += str[i];
        }
    }
    st.push(temp);
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
    cout<<ans;

    return 0;
}