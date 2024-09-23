# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)


/*
    Intutition:
        1. if the character which present in t is also present in s with equal or big count
        1a.otherwise impossible to make t with s.

        
        2a.iterate on string t compare with s if not equal then reduce count of that character from sCharCount and move pointer to right of s string
        
        2b.iterate on string t compare with s if equal then compare for count of that chararcter
        2ba.if count in s is greater then reduce count of that character from sCharCount and move pointer to right of s string
        2bb.if count in s is equal then reduce count of that character from sCharCount and tCharCount and move both pointer to right
        2bc.if count in s is less then impossible to make string t.
        
        2c.if string s finished and string t remained it means impossible to make t from s

*/

void possible_to_make_t( string &s, string &t){
    vector< int > countTChar(26,0);
    vector< int > countSChar(26,0);
    for( int i=0; i<s.length(); ++i ){
        char ch = s[i];
        countSChar[ch-'A']++;
    }

    for( int i=0; i<t.length(); ++i ){
        char ch = t[i];
        countTChar[ch-'A']++;
    }

    for( int i=0; i<26; ++i ){
        if( countTChar[i]>countSChar[i] ){
            cout<<"NO"<<endl;
            return;
        }
    }

    int s_i = 0, t_i = 0 , ns = s.length(), nt = t.length();
    while( t_i<nt ){
        while( s_i<ns && s[s_i]!=t[t_i] ){
            countSChar[ s[ s_i ]-'A' ]--;
            s_i++;

        }
        if( s_i<ns && s[s_i]==t[t_i] ){
            while( s_i<ns && s[s_i]==t[t_i] && (  countSChar[ s[ s_i ]-'A' ] > countTChar[ t[ t_i ]-'A' ] ) ){
                countSChar[ s[ s_i ]-'A' ]--;
                s_i++;
            }
            if( s_i<ns && s[s_i]==t[t_i] && (  countSChar[ s[ s_i ]-'A' ]  == countTChar[ t[ t_i ]-'A' ] ) ){
                countSChar[ s[ s_i ]-'A' ]--;
                countTChar[ t[ t_i ]-'A' ]--;
                t_i++;
                s_i++;
            }
            if( s_i<ns && s[s_i]==t[t_i] && (  countSChar[ s[ s_i ]-'A' ]  < countTChar[ t[ t_i ]-'A' ] ) ){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s_i == ns && t_i<nt){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s >>t;
        possible_to_make_t( s, t );
    }

    return 0;
}