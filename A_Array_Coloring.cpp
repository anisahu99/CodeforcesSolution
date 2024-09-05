# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

/*
    Intuition:
                Same Parity means both are odd or even.
                sum off two odd or sum of two even is even.
                The idea is if sum of all array element is odd we cannot color in two ways which has same parity.
                if sum is even we can do .
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum += x;
        }
        if(sum&1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}