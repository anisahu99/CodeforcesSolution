# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition and Approach:
                1. if (b>d) means we have to do (y-1) operation which we cannot.
                2. if(c>a) we have to do x+1 operation,
                2(a).if distance between c and a is greater than distance between d and b
                it means we need more x+1 operation which cause b cross the d
                and our answer will never exist. 
                2(b).otherwise we will calculate how many moves need (c,d).
                3.if(a>=c) we will calculate how many moves need to reach (c,d).
*/


int minimum_number_of_moves(int &a, int &b, int &c, int &d){
    // (a, b) -> (c, d)
    if(b>d) return -1;
    else if( c>a && abs(a-c) - abs(d-b) >0 ) return -1;
    else if( c>a && abs(a-c) - abs(d-b) <=0 ){
        int y_distance = abs(d-b);
        int x_distance = abs(a-c);
        if(y_distance==x_distance) return y_distance;
        else return y_distance + ( y_distance - x_distance );
    }
    else if( a>=c ){
        int y_distance = abs(d-b);
        int x_distance = abs(a-c);
        if( y_distance==0 ) return x_distance;
        else{
            int moves = y_distance;
            moves += x_distance + y_distance ;
            return moves;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a >>b >>c >>d;
        cout<<minimum_number_of_moves(a, b, c, d)<<endl;
    }

    return 0;
}