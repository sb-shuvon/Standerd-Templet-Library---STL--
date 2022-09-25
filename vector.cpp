#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // declare vector
    vector<int>v,v1,v2;

    //push _ back(value Input)
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(9);
    v.push_back(11);
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(52);
    v.push_back(23);

    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(7);
    v1.push_back(1);

    v2.push_back(2);
    v2.push_back(1);
    v2.push_back(6);
    v2.push_back(3);
    v2.push_back(7);

    // size(vector size print)
    cout<< v.size() <<endl;

    // printing vector value
    cout<< v[1] <<" ";
    cout<< v[3] <<endl;

    cout<< v.at(1) << " ";
    cout<< v.at(3) << endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<< endl;

    // front() (front value print)
    cout<< v.front() <<endl;

    // back() (back value print)
    cout<< v.back() <<endl;

    // clear() (vector all value clear)
    //v.clear();
    cout<< v.size () <<endl;

    // empty() (vector value check "Empty" or "Not Empty"
    if(v.empty())
    {
        cout<< "Empty" <<endl;
    }
    else
        cout<< "Not Empty" <<endl;

    // pop _ back() (last value delete from vector)
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout<< v.at(i)<< " ";
    }
    cout<< endl;

    // erase() (any value delete from anywhere)
    v.erase(v.begin()+2);
    for(int i=0; i<v.size(); i++)
    {
        cout<< v.at(i)<< " ";
    }
    cout<< endl;

    // erase() (multiple value delete from anywhere)
    v.erase(v.begin()+6, v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<< v.at(i)<< " ";
    }
    cout<< endl;

    // insert() (any value add in anywhere)
    v.insert(v.begin()+1,1);
    for(int i=0; i<v.size(); i++ )
    {
        cout<< v[i] <<" ";
    }
    cout<< endl;

    // insert() (any value add in anywhere)
    v.insert(v.begin()+1,3,2);
    for(int i=0; i<v.size(); i++ )
    {
        cout<< v[i] <<" ";
    }
    cout<< endl<<endl;

    // swap() (transfer value in others vector)

    cout<< "before swapping" <<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i]<< " ";
    }
    cout<< endl;

    for(int i=0; i<v2.size(); i++)
    {
        cout<< v2[i] << " ";
    }
    cout<< endl;

    swap(v1,v2);
    cout<< "After Swapping"<<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i]<< " ";
    }
    cout<< endl;

    for(int i=0; i<v2.size(); i++)
    {
        cout<< v2[i] << " ";
    }
    cout<< endl<<endl;;

    // sort() ( 1st to last all value sorting )
    cout<< "before sorting" <<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i] << " ";
    }
    cout<< endl;

    sort(v1.begin(), v1.end());

    cout<< "before sorting" <<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i] << " ";
    }
    cout<< endl;

    // reverse() ( vector value reverse)

    cout<< "before reverse" <<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i] << " ";
    }
    cout<< endl;

    reverse(v1.begin(), v1.end());

    cout<< "before reverse" <<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i] << " ";
    }
    cout<< endl;

    // iteration ( iteration like this pointer )

    vector<int> :: iterator it;

    for(it= v.begin(); it!=v.end(); it++)
    {
        cout<< *it<<" ";
    }




    getch();
}
