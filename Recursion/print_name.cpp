#include<bits/stdc++.h>
using namespace std;

void print_name(int n){
    if (n<=0)
    {
        return ;
    }
    cout<<"hey, prajwal"<<endl;
    print_name(n-1);
    
} 
int main(){
    int n=5;
    print_name(n);
    return 0;
}