#include<iostream>
#include<conio.h>
#include<map>
using namespace std;

int main()
{
    map<int,int> mp,mp2;     // key or index / value
    map<int,string> mp1;

    mp1.insert({1, "Nilima"});
    mp1.insert({2, "TAsnim"});
    mp1.insert({3, "Bappi"});
    mp1.insert({4, "Shuvon"});

    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({5,50});
    mp[6]= 60;
    mp[7]= 70;
    mp[1]+=100;

    mp2.insert({2,30});
    mp2.insert({5,50});
    mp2.insert({3,20});

    cout<< mp.at(1)<<endl;
    cout<< mp[2]<<endl;
    cout<< mp[7]<<endl;

    for(auto it : mp)cout<< it.first << " " <<it.second <<endl;

    cout<<endl;

    map<int,int> :: iterator it1;
    for(it1= mp.begin(); it1!=mp.end(); it1++)
    {
        cout<< it1->first << " " << it1->second << endl;
    }
    cout<<endl;

    cout<< mp.size()<<endl;
    cout<< mp.max_size() <<endl;

    //mp.clear();
    for(auto it : mp)cout<< it.first << " " <<it.second <<endl;

    if(mp.empty())cout<< "Empty" << " ";
    else cout<< "Not Empty"<<endl;

    mp1.erase(3);
    for(auto it2 : mp1)cout<< it2.first << " " <<it2.second <<endl;

    int cnt= mp.count(10);
    cout<< cnt <<endl;

    auto it = mp.find(3);
    if(it!=mp.end())cout<< "Find"<<endl;
    else cout<< endl;

    auto it2= mp.lower_bound(8);
    cout<< (*it2).first << " " <<(*it2).second <<endl;

    auto it3=mp.upper_bound(3);
    cout<< (*it3).first << " " << (*it3).second << endl;


    cout<< "Before Swap"<<endl;
    for(auto it4 : mp)cout<< it4.first << " " << it4.second <<endl;
    for(auto it5 : mp2)cout<< it5.first << " " << it5.second <<endl;

    mp.swap(mp2);

    cout<< "After Swap"<<endl;
    for(auto it4 : mp)cout<< it4.first << " " << it4.second <<endl;
    for(auto it5 : mp2)cout<< it5.first << " " << it5.second <<endl;


    getch();
}
