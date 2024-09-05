# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

/* 
    Intuition:
                The optimal way is everyone try to maximize  press by C type button.
    Approach:
    the Annal will get first turn i.e
    if c is odd number then Anna will get one extra chance to press
    if a+1>b i.e Anna have more chance to press and Anna will never be last one who has no button to press
    if a+1<=b i.e Katie have more chance to press and Katie will never be last one who has no button to press

    if c is even number then Anna and Katie will get same number of chance to press
    if a>b i.e Anna have more chance to press and Anna will never be last one who has no button to press
    if a<=b i.e Katie have more chance to press and Katie will never be last one who has no button to press
*/

void solve(int a, int b, int c){
    if(c&1) a++;
    if(a>b){
        cout<<"First"<<endl;
    }else{
        cout<<"Second"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a >>b >>c;
        solve(a, b, c);
    }
  
    return 0;
}
