#include<iostream>
#include<conio.h>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int>us,us1,us3;

    us.insert(3);
    us.insert(1);
    us.insert(2);
    us.insert(2);
    us.insert(5);
    us.insert(4);

    us1.insert(8);
    us1.insert(7);
    us1.insert(9);

    for(auto it : us)cout<< it << " ";
    cout<<endl;

    unordered_set<int> :: iterator it1;
    for(it1= us.begin(); it1!= us.end(); it1++)
    {
        cout<< *it1 <<" ";
    }
    cout<<endl;

    cout<< us.count(2)<<endl;

    auto it2= us.find(3);
    if(it2!=us.end())
    {
        cout<< "Find"<<endl;
    }
    else
        cout<< "Not Find"<<endl;

    cout<< us.size()<<endl;

    //us.clear();
    auto it3= us.begin();
    advance(it3,3);

    us.erase(it3);
    for(auto it3 : us)cout<< it3 << " ";
    cout<<endl;


    us.swap(us1);
    for(auto it4 : us)cout<< it4 << " ";
    cout<<endl;

    us3= us1;
    for(auto it5 : us3)cout<< it5 << " ";
    cout<<endl;

    cout<< us.bucket_count()<<endl;
    cout<< us.bucket(5)<<endl;
    cout<< us.bucket_size(2)<<endl;


    getch();
}
