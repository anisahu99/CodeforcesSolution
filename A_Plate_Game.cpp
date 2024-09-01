# include<bits/stdc++.h>
using namespace std;

void f(){
    cout<<"First"<<endl;
}
void s(){
    cout<<"Second"<<endl;
}

void solve(int &a, int &b, int &r){

    int d = 2*r;
    int min_side = min( a, b );
    if( d>min_side ){
        s();
        return ;
    }


    if( min_side/d ==1 ){
        f();
    }else if( min_side%d == 0 && (min_side/d)%2==0 ){
        s();
    }else if( min_side%d == 0 && (min_side/d)%2==1 ){
        f();
    }else if( min_side%d != 0 && (min_side/d)%2==0 ){
        s();
    }else if( min_side%d != 0 && (min_side/d)%2==1 ){
        f();
    }
}

int main(){
    int a, b, r;
    cin >>a >>b >>r;
    solve(a, b, r);
    return 0;
}