#include<iostream>
#include<conio.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_multimap<int,int>umm;

    umm.insert({1,10});
    umm.insert({4,40});
    umm.insert({5,50});
    umm.insert({3,30});
    umm.insert({2,20});
    umm.insert({5,50});
    umm.insert({3,30});

    for(auto it : umm)cout<< it.first << " " << it.second<<endl;
    cout<<endl;

    cout<< umm.count(3)<<endl;

    getch();
}

