# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition & Approach:
                1. if size of array is even the number(x) we will choose, will
                nullify it effect by itself(except x=0)
                if xor of array element is 0 then answer will exist which is 0
                other return -1 i.e x will not exist.
                2.if size of array is odd then x can show its effect and answer
                will always exist

                we will find out the xor of whole array then see number in bit
                format and which position of bit on or not
                and we will create a number(x) which toggle bit 1 to bit 0 of
                xor.
*/

int choose_an_integer_x(const vector<int> &a, const int &n){
    int xr = 0;
    for(int v:a){
        xr ^= v;
    }
    if(even(n)){
        if(xr==0) return 0;
        else return -1;
    }
    int x = 0;
    for(int i=0;i<32;i++){
        int bitValue = xr &(1<<i);
        if(bitValue){
            x+=(1<<i);
        }
    }
    return x;
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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<choose_an_integer_x(a, n)<<endl;
    }

    return 0;
}