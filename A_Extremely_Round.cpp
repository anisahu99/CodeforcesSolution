# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
            1. If you write down numbers try to count how many extremely round integers lie in range
            then you will see, between every single, double, .. digit number you will get 9 round numbers
            2. in total round numbers in single digit or double digit range is 9

    Approach:
            1. first try to count how many digits in number
            2. and find out the rightMost digit number
            3. it is sure if our number of x digit then (x-1)*9 round_number will exist
            4. check for rightMost digit

*/

int number_of_extremely_round_integers( int &n ){
    int rightMostDigit;
    int numberOfDigits = 0;
    while( n!=0 ){
        numberOfDigits++;
        rightMostDigit = n%10;
        n /=10;
    }
    int counts = ( numberOfDigits-1 )*9 + rightMostDigit;
    return counts;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; // 1 ≤ n ≤ 999999
        
        cout<<number_of_extremely_round_integers( n )<<endl;
    }

    return 0;
}