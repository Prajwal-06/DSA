#include<bits/stdc++.h>
using namespace std;

int main()
{
    // maximum heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);

    cout<<pq.top()<<endl;
    //minimum heap
    priority_queue<int , vector<int> , greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.push(10);

    cout<<pq1.top();

    return 0;
}
