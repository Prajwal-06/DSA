#include<bits/stdc++.h>
using namespace std;

void print_name(int i ,int n){
    if (i>n)
    {
        return ;
    }
    print_name(i+1 , n);
    cout<<i<<endl;
    
    
}
int main(){
    int n=5;
    print_name(1 , n);
    return 0;
}