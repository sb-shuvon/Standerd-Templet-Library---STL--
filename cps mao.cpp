#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int main()
{
    optimize();

    map<string, int> id;

    id["Nilima"] = 1;
    id["Tasnim"] = 2;
    id["Bappy"] = 3;
    id["shuvon"] = 8;

    cout << id["Tasnim"] << endl;

    map<string, string> gender;

    gender["Nilima"] = "Women";
    gender["shuvon"] = "Male";

    cout<< gender["Nilima"] << " " << gender["shuvon"] << endl;


    vector<long long> v = { 1, 232432423142354325, 3243245254352345, 232432423142354325 };
    map<long long, int> cnt;

    for ( int i = 0; i < v.size(); i++ ) cnt[v[i]]++;
    cout<< cnt[232432423142354325] << endl;

    map<string, int> ID;

    ID["Nilima"] = 3;
    ID["Tasnim"] = 2;
    ID["Bappy"] = 7;
    ID["shuvon"] = 9;
    ID["sb"] = 4;

    for ( auto u : ID ) cout << u.first << " " << u.second << endl;


    map<int, bool> vis;

    vector<int> vc = { 2, 2, 1, 1, 3 };

    for ( auto u : vc ) vis[u] = 1;

    for ( auto u : vis ) cout << u.first << " " << u.second << endl;


    map<string, string> gen;

    gen["Nilima"] = "Female";
    gen["Tasnim"] = "Female";
    gen["Bappy"] = "Female";
    gen["shuvon"] = "male";

    cout << gen["Tasnim"] << " " << gen["Nilima"] << endl;

    vector<map<string, int> > vc1;

    map<string, int> c;
    c["nilima"] = 1;

    vc1.push_back ( c );
    cout << vc1[0]["nilima"] << endl;

    map<int, int> cp;

    cp[1] = 1;
    cp[2] = 2;
    cp[3] = 3;
    cp[2] = 2;

    cout << c.size() << endl;


    return 0;
}
