# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

void min_max_bus( const long long &n ){

    if( n<4 ){
        cout<<-1<<endl;
    }else{
        if( n%4==0 && n%6==0 ){
            cout<<n/6<<" "<<n/4<<endl;
        }else if( n%4==0 && n%6==4 ){// extra 4 tyre add 1 bus
            cout<<n/6+1<<" "<<n/4<<endl;
        }else if( n%4==0 && n%6==2 ){// extra 2 tyre and we will take out one bus of 6 wheel to( 4 wheel + 2 wheel ) take 2 wheel and make these 2 and extra 2 tyre make 1 bus. 
            cout<<n/6+1<<" "<<n/4<<endl;
        }
        else if( n%4==2 && n%6==0 ){
            cout<<n/6<<" "<<(n/4-1)+1<<endl;
        }else if( n%4==2 && n%6==4  ){
            cout<<n/6+1<<" "<<(n/4-1)+1<<endl;
        }else if( n%4==2 && n%6==2 ){
            cout<<n/6+1<<" "<<n/4<<endl;
        }
        else if( n%4==0 ){
            cout<<n/4<<" "<<n/4<<endl;
        }else if( n%6==0 ){
            cout<<n/6<<" "<<n/6<<endl;
        }else{
            cout<<-1<<endl;
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
        long long n;
        cin>>n;
        min_max_bus( n );
    }

    return 0;
}