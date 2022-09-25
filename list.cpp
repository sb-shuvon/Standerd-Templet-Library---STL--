#include<iostream>
#include<conio.h>
#include<list>
using namespace std;

int main()
{

    list<int>li={1,2,3,4,5,6,6,6,6,6,7,8,9},li2;

    for(auto it : li)
    {
        cout<< it << " ";
    }
    cout<< endl;

    cout<< li.front() << endl;
    cout<< li.back() << endl;

    li.pop_front();
    for(auto it : li)
    {
        cout<< it << " ";
    }
    cout<< endl;

    li.pop_back();
    for(auto it : li)
    {
        cout<< it << " ";
    }
    cout<< endl;

    cout<< li.size()<<endl;

    //li.clear();
    for(auto it : li)
    {
        cout<< it << " ";
    }
    cout<< endl;

    if (li.empty())
    {
        cout<< "Empty"<<endl;
    }
    else
        cout<< "Not Empty"<<endl;


    list<int> :: iterator it;
    it= li.begin();
    advance(it,5);
    li.insert(it,3,4);
    for(auto it : li)
    {
        cout<< it << " ";
    }
    cout<< endl;

    list <int> :: iterator it1, it2;
    it1= li.begin();
    it2= li.begin();
    advance(it2,3);

    li.erase(it1,it2);

    for(auto it1 : li)
    {
        cout<< it1 << " ";
    }
    cout<< endl;

    li.remove(4);
    for(auto it1 : li)
    {
        cout<< it1 << " ";
    }
    cout<< endl;

    li.reverse();
    for(auto it1 : li)
    {
        cout<< it1 << " ";
    }
    cout<< endl;

    li.sort();
    for(auto it1 : li)
    {
        cout<< it1 << " ";
    }
    cout<< endl;

    li.unique();
    for(auto it1 : li)
    {
        cout<< it1 << " ";
    }
    cout<< endl;

    list<int>li3={1,2,3,4,5};
    list<int>li4={6,7,8,9,10};

    cout<< "before swap"<<endl;
    for(auto it3 : li3)
    {
        cout<< it3 << " ";
    }
    cout<<endl;

    cout<< "before swap"<<endl;
    for(auto it4 : li4)
    {
        cout<< it4 << " ";
    }
    cout<<endl<<endl;

    li3.swap(li4);

    cout<< "after swap"<<endl;
    for(auto it3 : li3)
    {
        cout<< it3 << " ";
    }
    cout<<endl;

    cout<< "after swap"<<endl;
    for(auto it4 : li4)
    {
        cout<< it4 << " ";
    }
    cout<<endl;


    li3.merge(li4);
    for(auto it3 : li3)cout<< it3 <<" ";
    cout<< endl;

    cout<< li4.size()<<endl;





    getch();
}
