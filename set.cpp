#include<iostream>
#include<conio.h>
#include<set>
using namespace std;

int main()
{
    set<int,greater<int> >s;
    set<int> s2,s3,s4;

    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.emplace(7);
    s.emplace(8);

    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);

    s3.insert(1);
    s3.insert(2);
    s3.insert(4);
    s3.insert(4);

    cout<< s.size() <<endl;
    cout<< s.max_size() <<endl;

    set<int> :: iterator it;
    for(it= s.begin(); it!=s.end(); it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;

    it= s.find(2);
    if(it!=s.end())cout<< "Find"<<endl;
    else cout<< "Not Find"<<endl;

    set<int> :: iterator it1;
    it1= s.begin();
    advance(it1,3);

    s.erase(it1);
    for(auto it1 : s)cout<< it1 <<" ";
    cout<<endl;

    //s.clear();
    if(s.empty())cout<< "Empty" <<endl;
    else cout<< "Not Empty "<<endl;

    int cnt= s.count(2);
    cout<<cnt<<endl;

    for(auto it : s)cout<< it << " ";
    cout<< endl;

    set<int> :: iterator it2;
    it2 = s2.lower_bound(2);

    if(it2==s2.end())
    {
        cout<< "The element is larger or equal to the Greater Element"<<endl;
    }
    else
    {
        cout<< "The lower bound of 2 is : "<< *it2 <<endl;
    }

    for(auto it3 : s3)cout<< it3 << " ";
    cout<< endl;

    set<int> :: iterator it3;
    it3 = s3.upper_bound(3);

    if(it3==s3.end())
    {
        cout<< "The element is larger or equal to the Greater Element"<<endl;
    }
    else
    {
        cout<< "The upper bound of 3 is : "<< *it3 <<endl;
    }

    s2.swap(s3);
    for(auto it2 : s2)cout<< it2 << " ";
    cout<<endl;

    s2= s4;


    getch();
}
