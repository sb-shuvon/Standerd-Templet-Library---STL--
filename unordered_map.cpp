#include<iostream>
#include<conio.h>
#include<unordered_map>
using namespace std;

int main()
{
     unordered_map<int,int> ump;

     ump[1]= 10;
     ump[2]= 20;
     ump[3]= 30;
     ump[4]= 40;
     ump[5]= 50;

     for(auto it : ump)cout<< it.first << " " <<it.second <<endl;
     cout<<endl;

     for(auto it1= ump.begin(); it1!=ump.end(); it1++)
     {
         cout<< (*it1).first << " " << (*it1).second<<endl;
     }
     cout<<endl;

     cout<< ump.bucket_count()<<endl;
     cout<< ump.bucket(2)<<endl;
     cout<< ump.bucket_size(4)<<endl;

     cout<< ump.count(2)<<endl;


    getch();
}
