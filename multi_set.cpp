#include<iostream>
#include<conio.h>
#include<set>
using namespace std;

int main()
{
    multiset<int>ms,ms2;

    ms.insert(1);
    ms.insert(4);
    ms.insert(3);
    ms.insert(3);
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);
    ms.emplace(7);

    ms2.emplace(8);
    ms2.emplace(9);
    ms2.emplace(10);

    multiset<int> :: iterator it;
    for(it= ms.begin(); it!= ms.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<endl;

    for(auto it1 : ms)cout<< it1 << " ";
    cout<< endl;

    cout<< ms.size() <<endl;
    cout<< ms.max_size() <<endl;

    if(ms.empty())cout<< "Empty" << " ";
    else cout<< "Not Empty" <<endl;

    //ms.clear();
    for(auto it : ms)cout<< it << " ";
    cout<<endl;

    it= ms.begin();
    advance(it,3);

    ms.erase(it);
    for(auto it : ms)cout<< it << " ";
    cout<<endl;

    auto it2= ms.find(2);
    if(it==ms.end())
    {
        cout<< "Not Find"<<endl;
    }
    else
        cout<< "Find"<<endl;

    cout<< ms.count(50) <<endl;


    auto it3= ms.lower_bound(3);
    for(auto it4=it3; it4!=ms.end(); it4++)
    {
        cout<< *it4 << " ";
    }
    cout<< endl;
    cout<< *it3 << endl;

    auto it5= ms.upper_bound(2);
    for(auto it6= it5; it6!=ms.end(); it6++)
    {
        cout<< *it6 <<" ";
    }
    cout<< *it5 <<endl;

    ms2= ms;
    for(auto it7 : ms2)cout<< it7 << " ";
    cout<<endl;

    for(auto it8 : ms2)cout<< it8 << " ";
    cout<<endl;

    ms.swap(ms2);

    for(auto it8 : ms)cout<< it8 << " ";
    cout<<endl;


    getch();
}
