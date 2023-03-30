#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int cnt[100123];

int main()
{
    optimize();

    vector<int> v = { 2, 2, 3, 4, 2 };

    for ( int i = 0; i < 5; i++ ){
        cnt[v[i]]++;
    }


    return 0;
}
