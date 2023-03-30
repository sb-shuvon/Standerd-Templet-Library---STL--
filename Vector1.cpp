#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    vector<int> v;

    v.push_back ( 2 );
    v.push_back ( 3 );
    v.push_back ( 5 );
    v.push_back ( 6 );

    v[2] = 30;

    cout << v[2] << endl;
    cout << v[0] << endl;

    cout<< v.size() << endl;

    for ( int i = 0; i < v.size(); i++ )cout << v[i] << " ";
    cout<< endl;

    int n;
    vector<int> vc;

    cin>> n;
    for ( int i = 0; i < n; i++ ){
        int a;
        cin>> a;
        vc.push_back ( a );
    }

    cout << vc.size() <<endl;
    for ( int i = 0; i < vc.size(); i++ ) cout << vc[i] << " ";
    cout << endl;

    vector<int> vt = { 5, 4, 2, 8, 9};
    cout<< vt.size() << endl;
    for ( int i = 0; i < vt.size(); i++ ) cout << vt[i] << " ";
    cout<< endl;

    //v.clear();
    cout<< v.size() << endl;

    cout << v.empty() << endl;

    v.resize( 10 );
    for( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
    cout<< endl;

    vector<int> v1;
    v1.resize( 10 );

    int m;
    cin>> m;
    for ( int i = 0; i < m; i++) cin>> v1[i];

    cout<< v1.size() << endl;
    for( int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout<< endl;

    vector<int> v2(10);

    int p;
    cin >> p;
    for( int i = 0; i < p; i++) cin >> v2[i];

    cout << v2.size() << endl;
    for ( int i = 0; i < v2.size(); i++ ) cout << v2[i] << " ";
    cout << endl;


    vector<int> v3(10, 5);

    for( int i = 0; i < v3.size(); i++) cout<< v3[i] << " ";
    cout<< endl;


    vector<int> v4 = {3, 5, 1, 7};
    vector<int> tmp;

    tmp = v4;

    cout<< tmp.size() << endl;
    for ( int i = 0; i < tmp.size(); i++ ) cout << tmp[i] << " ";
    cout<< endl;

    cout << v4.size() << endl;
    for ( int i = 0; i < v4.size(); i++) cout << v4[i] << " ";
    cout<< endl;


    vector<int> v5 = { 2, 5, 1, 9, 6 };

    vector<int> :: iterator it;

    for ( it = v5.begin(); it != v5.end(); it++ ) cout << *it << " ";
    cout << endl;

    vector<int> v6 = { 4, 6, 2, 9 };

    for ( int u : v6 ) cout << u << " ";
    cout<< endl;


    vector<int> v7 = { 4, 6, 2, 9 };

    for ( auto u : v7 ) cout << u << " ";
    cout<< endl;


    int n1;
    vector<int> v8;

    while ( 1 ){
        cin>> n1;
        if ( n1 == 0 ) break;
        v8.push_back ( n1 );
    }

    cout << v8.size() << endl;
    for ( auto u : v8 ) cout << u << " ";
    cout << endl;


    vector<int> v9 = {5, 2, 9, 3, 6};

    sort ( v9.begin(), v9.end() );

    for( auto u : v9 ) cout << u << " ";
    cout << endl;


    vector<int> v10 = { 5, 3, 3, 4, 1, 1, 2 };

    sort ( v10.begin()+1, v10.begin()+5 );

    for ( auto u : v10 ) cout << u << " ";
    cout << endl;


    vector<int> v11 = { 5, 3, 3, 4, 1, 1, 2 };

    sort ( v11.begin(), v11.end(), greater<int>() );

    for ( auto u : v11 ) cout << u << " ";
    cout << endl;

    vector<int> v12 = { 5, 3, 3, 4, 1, 1, 2 };

    sort ( v12.rbegin(), v12.rend() );

    for ( auto u : v12 ) cout << u << " ";
    cout << endl;


    vector<int> v13 = { 2, 4, 7, 2, 5};

    reverse ( v13.begin(), v13.end() );

    for( auto u : v13 ) cout << u << " ";
    cout << endl;



    vector<int> v14 = { 2, 3, 4, 5 };

    cout << v14.back() << endl;
    v14.pop_back();

    cout << v14.back() << endl;
    cout << *v14.begin () << endl;
    v14.erase ( v14.begin() );

    cout << v14.size() <<endl;
    for( auto u : v14 ) cout << u << " ";
    cout<< endl;


    vector<int> v15 = { 2, 3, 4, 6 };

    reverse ( v15.begin() , v15.end() );

    while( !v15.empty() ){
        cout << v15.back() << endl;
        v15.pop_back();
    }


    vector<int> v16 = { 2, 3, 5, 5, 7, 7, 1 };

    sort ( v16.begin(), v16.end() );

    int sz = unique ( v16.begin(), v16.end() ) - v16.begin();

    cout << sz << endl;
    for ( int i = 0; i < sz; i++ ) cout << v16[i] << " ";
    cout << endl;


    vector<int> v17 = { 2, 3, 4, 5, 5, 7, 7, 1 };

    vector<int> :: iterator it = max_element ( v17.begin(), v17.end() );
    cout << *it <<endl;


    vector<int> v18 = { 2, 3, 5, 5, 7, 7, 1 };

    vector <int> :: iterator it = max_element ( v18.begin()+1, v18.begin()+4 );
    cout << *it << endl;


    vector<int> v19 = { 2, 3, 5, 5, 7, 7, 1 };

    int n = max_element ( v19.begin(), v19.end() ) - v19.begin();
    cout << n << endl;


    vector<int> v20 = { 2, 3, 5, 5, 7, 7, 1 };

    int n = min_element ( v20.begin(), v20.end() ) -  v20.begin();
    cout << n << endl;


    vector< vector<int> > vt;

    vector<int> a1 = { 2, 3, 4 };
    vector<int> a2 = { 3, 5, 7, 2, 9 };

    vt.push_back( a1 );
    vt.push_back( a2 );

    for ( auto  u : vt ){
        for ( auto g : u ) cout << g << " ";
        cout << endl;
    }

}
