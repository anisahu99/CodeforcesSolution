# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

void make_sum_of_taken_integers_equal_to_n(const int &n, const int &k, const int &x){
    if(x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for(int i=0;i<n;i++) cout<<1<<" ";
    }else{ // x==1
        if(k==1) cout<<"NO";
        else if( !(n&1) ){// x==1 and n is even
            cout<<"YES"<<endl<<n/2<<endl;
            for(int i=0;i<(n/2);i++) cout<<2<<" ";
        }else{ // x==1 and n is odd
            // we will make odd number using 3
            if(k>=3){
                // 2*p+1 -> 2(p-1) +3
                cout<<"YES"<<endl<<n/2<<endl;
                for(int i=0; i<(n/2 -1); i++) cout<<2<<" ";
                cout<<3<<" ";
            }else{
                cout<<"NO";
            }
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k, x;
        cin>>n >>k >>x;
        make_sum_of_taken_integers_equal_to_n(n ,k, x);
    }
    return 0;
}