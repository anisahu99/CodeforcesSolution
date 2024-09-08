# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1. if we have character of with even count so we can make palindrome from those character (abba)
            so same we will calculate total character with even count and also we can take one odd count character
            that one character we will put at the middle.(abc c cba)

    Approach:
        1.we can take approach from intuition
        2.we will take unordered_map to store counts
        3.oneChar boolean variable to one odd occured character
        4.we will take all even count of character and reject one extra character of that character which make
        string not palindrome 
        and we store count rejected characters
        5.we compare k with rejected characters
*/

void possible_to_remove_exactly_k_characters_rearranged_to_form_a_palindrome(const string &s, const int &n, const int &k){

    unordered_map<char,int> charFreq;
    for( const char &ch: s ){
        charFreq[ch]++;
    }
    int character_remove_to_make_palindrome =0;
    int palindromeStringLength = 0;
    bool oneChar = true;
    for( auto it: charFreq ){
        if( even(it.second) ){
            palindromeStringLength +=it.second;
        }else if( odd(it.second) && oneChar){
            palindromeStringLength += it.second;
            oneChar = false;
        }else{
            palindromeStringLength +=it.second-1;
            character_remove_to_make_palindrome +=it.second%2;
        }
    }

    if( k<character_remove_to_make_palindrome ){
        cout<<"NO"<<endl;
    }else{
        if( (k-character_remove_to_make_palindrome) <= palindromeStringLength ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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
        int n, k;
        string s;
        cin>>n >>k >>s;
        possible_to_remove_exactly_k_characters_rearranged_to_form_a_palindrome( s, n , k );
    }

    return 0;
}