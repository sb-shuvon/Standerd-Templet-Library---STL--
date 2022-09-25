#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int> > pq,pq1;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    pq.push(3);

    pq1.emplace(1);
    pq1.emplace(3);
    pq1.emplace(2);

    cout<< pq.size() << endl;

    if(pq.empty())cout<< "Empty" <<endl;
    else cout<< "Not Empty" << endl;

    while(!pq.empty())
    {
        cout<< pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    pq.swap(pq1);
    while(pq.size()>0)
    {
        cout<< pq.top() << " ";
        pq.pop();
    }
    cout<<endl;

    getch();
}
