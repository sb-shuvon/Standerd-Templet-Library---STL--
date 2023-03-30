#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int main()
{
    set<int> s = { 1, 1, 2, 1, 3 };

    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " ";
    cout << endl;

    set<int> :: iterator it;
    for ( it = s.begin(); it != s.end(); it++ ) cout << *it << " ";
    cout<< endl;

    s.clear();
    cout << s.empty() << endl;

    s.insert ( 1 );
    s.insert ( 1 );
    s.insert ( 1 );
    s.insert ( 2 );
    s.insert ( 1 );
    s.insert ( 3 );

    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " " ;
    cout << endl;

    cout << s.count ( 2 ) << endl;
    cout << s.count ( 4 ) << endl;

    cout << *s.begin() << endl;

    cout << *(--s.end()) << endl;
    cout << *s.rbegin() << endl;


    s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( 2 );
    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " ";
    cout<< endl;

    s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( s.begin() );
    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " ";
    cout << endl;

    s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( --s.end() );
    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " ";
    cout << endl;

    set<pair<int, int>> s1;

    s1.insert ( { 1, 2 } );
    s1.insert ( { 1, 2 } );
    s1.insert ( { 4, 2 } );
    s1.insert ( { 4, 3 } );
    s1.insert ( { 2, 2 } );
    s1.insert ( { 2, 1 } );


    cout << s1.size() << endl;
    for ( auto u : s1 ) cout << u.first << " " << u.second << endl;

    set <string> s2;

    s2.insert ( "nilima" );
    s2.insert ( "bappy" );
    s2.insert ( "tasnim" );
    s2.insert ( "shuvon" );
    s2.insert ( "nilima" );
    s2.insert ( "bappy" );
    s2.insert ( "tasnim" );
    s2.insert ( "shuvon" );

    cout << s2.size() << endl;
    for ( auto u : s2 ) cout << u << endl;

    set<int, greater<int>> s3 = { 3, 4, 1, 2 };
    for ( auto u : s3 ) cout << u << " ";
    cout << endl;

    set<string, greater<string>> s4;

    s4.insert ( "nilima" );
    s4.insert ( "tasnim" );
    s4.insert ( "bappy" );
    s4.insert ( "shuvon" );

    cout << s4.size() << endl;
    for ( auto u : s4  ) cout << u << endl;

    set<pair<int, int>, greater<pair<int, int>>> s5;

    s5.insert ( { 1, 2 } );
    s5.insert ( { 1, 2 } );
    s5.insert ( { 4, 2 } );
    s5.insert ( { 4, 4 } );
    s5.insert ( { 2, 2 } );
    s5.insert ( { 2, 1 } );

    cout << s5.size() << endl;
    for ( auto u : s5 ) cout << u.first << " " << u.second << endl;

    return 0;
}


