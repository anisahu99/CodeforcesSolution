# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            sign='>' OR sign = '<'
            1.if n==1 then we need two element irrespective of sign
            1.count max consecutive length of either sign=maximum_length_sign
            2.the element needed to satify the above condition, the same element
            also can be used to satify the other condition.
            3.This is the idea.
*/

int minimum_cost(const string &str, const int &n){
    if( n==1 ) return 2;
    int length = 0;
    char sign = '>';
    int maximum_length_sign = 0;
    for( int i=0; i<n; ++i ){
        if( str[i]=='>' && str[i]==sign ){
            length++;
            maximum_length_sign = max( maximum_length_sign, length);
        }else if( str[i]=='>' && str[i]!=sign ){
            maximum_length_sign = max( maximum_length_sign, length);
            length = 0;
            length++;
            sign = '>';
        }
        else if( str[i]=='<' && str[i]!=sign ){
            maximum_length_sign = max( maximum_length_sign, length);
            length = 0;
            length++;
            sign = '<';
        }else if( str[i]=='<' && str[i]==sign ){
            length++;
            maximum_length_sign = max( maximum_length_sign, length);
        }
    }
    return maximum_length_sign+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<minimum_cost( str, n )<<endl;
    }

    return 0;
}