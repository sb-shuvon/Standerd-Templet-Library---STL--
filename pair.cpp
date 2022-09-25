#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    pair<int,int>p,p2,p3;
    pair<int,char>p1(10,'N');
    p3= make_pair(20,40);

    p.first=10;
    p.second= 20;

    cout<< p.first << " " << p.second <<endl;
    cout<< p1.first << " " << p1.second <<endl;

    p2= p;
    cout<< p2.first << " " << p2.second <<endl;
    cout<< p3.first << " " << p3.second <<endl;

    p.swap(p3);
    cout<< p.first << " " <<p.second <<endl;

    if(p==p2)cout<< "YES"<<endl;
    else cout<< "NO" <<endl;

    if(p!=p2)cout<< "YES"<<endl;
    else cout<< "NO"<<endl;

    if(p>=p2)cout<< "YES"<<endl;
    else cout<< "NO"<<endl;

    if(p<=p2)cout<< "YES"<<endl;
    else cout<< "NO"<<endl;


    getch();
}
