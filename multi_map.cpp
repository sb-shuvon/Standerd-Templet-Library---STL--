#include<iostream>
#include<conio.h>
#include<map>
using namespace std;

int main()
{
    multimap <int,int>mp,mp1,mp2;

    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({1,60});

    for(auto it : mp)cout<< it.first << " " << it.second <<endl;
    cout<<endl;


    multimap<int,int> :: iterator it1;
    for(it1= mp.begin(); it1!=mp.end(); it1++)
    {
        cout<< (*it1).first << " " << (*it1).second <<endl;
    }
    cout<<endl;

    cout<< mp.size() <<endl;
    cout<< mp.max_size()<<endl;

    if(mp.empty())cout<< "Empty" <<endl;
    else cout<< "Not Empty"<<endl;

    auto it = mp.begin();
    advance(it,3);

    mp.erase(it);
    for(auto it : mp)cout<< it.first << " " << it.second <<endl;
    cout<<endl;

    //mp.clear();
    for(auto it : mp)cout<< it.first << " " <<it.second <<endl;

    cout<< mp.count(1)<<endl;

    auto it2= mp.find(100);
    if(it2!=mp.end())
    {
        cout<< "Find"<<endl;
    }
    else
        cout<< "Not Find"<<endl;

    auto it3 = mp.lower_bound(1);
    cout<< (*it3).first << " " <<(*it3).second <<endl;

    auto it4 = mp.upper_bound(2);
    cout<< (*it4).first << " " <<(*it4).second <<endl;
    cout<<endl;

    mp1= mp;
    for(auto it5 : mp1)cout<< it5.first << " " << it5.second <<endl;

    mp2.insert({6,60});
    mp2.insert({7,70});
    mp2.insert({8,80});

    cout<<endl;

    mp.swap(mp2);
    for(auto it6 : mp)cout<< it6.first << " " <<it6.second <<endl;



    getch();
}
