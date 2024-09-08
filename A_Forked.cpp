# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

// { { -a, b }, { a, b }, { -a, -b }, { a, -b } }
// { { -b, a }, { b, a }, { -b, -a }, { b, -a } }


    /*


                ( Xk-a ,Yk+b )                       ( Xk+a ,Yk+b )


( Xk-b ,Yk+a )                                                        ( Xk+b ,Yk+a )


                                    ( Xk, Yk )


( Xk-b ,Yk-a )                                                        ( Xk+b ,Yk-a )



                ( Xk-a ,Yk-b )                    ( Xk+a ,Yk-b )
    */


vector< pair< int,int > > PossbileMoves(int &a, int &b){
    vector< pair< int,int > > dir;
    for( int i=-1; i<2; i+=2 ){
        for(int j=-1;j<2;j+=2){
            int x = i*a;
            int y = j*b;

            int X = i*b;
            int Y = j*a;

            dir.push_back( { x,y } );
            dir.push_back( { X,Y } );
        }
    }
    return dir;
}

// Here the tricky thing is to compare to coordinates
// Keep them as String to compare

// x*a + y*b = X*a + y*b ;

int total_number_of_positions(int a, int b, int Xk, int Yk, int Xq, int Yq){
    vector< pair< int,int > > dir = PossbileMoves( a, b );
    unordered_set< string > st1, st2;
    for( pair<int,int>&p: dir){
        int x = Xk+p.first;
        int y = Yk+p.second;

        string pos;
        pos +=to_string(x);
        pos +=to_string(y);
        st1.insert(pos);
    }
    for( pair<int,int>&p: dir){
        int x = Xq+p.first;
        int y = Yq+p.second;

        string pos;
        pos +=to_string(x);
        pos +=to_string(y);
        st2.insert(pos);
    }

    int ans= 0;
    for( auto it1:st1 ){
        for( auto it2:st2 ){
            if( it1==it2 ) ans++;
        }
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b, Xk, Yk, Xq, Yq;
        cin>>a >>b >>Xk >>Yk >>Xq >>Yq;
        cout<<total_number_of_positions( a, b, Xk, Yk, Xq, Yq )<<endl;
    }

    return 0;
}