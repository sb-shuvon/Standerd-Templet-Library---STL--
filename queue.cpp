#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;

int main()
{
    queue<int>q,q1;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    q1.push(7);
    q1.push(8);
    q1.push(9);

    cout<< q.size()<<endl;
    cout<< q.front()<<endl;
    cout<< q.back()<<endl;

    if(q.empty())cout<< "Empty"<<endl;
    else cout<< "Not Empty" <<endl;

    q.pop();
    cout<< q.front()<<endl;

    q.swap(q1);

    while(!q.empty())
    {
        cout<< q.front() << " ";
        q.pop();
    }









    getch();
}
