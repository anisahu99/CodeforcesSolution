# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)


/*


    1. think yourself this question all about your observation.
    2. think given case

    Here total numbers of 1 is odd, how will make them zero
    
    index- 1 2 3
    case1- 1 1 1 
           ---   ---> do xor of indices [1,2] replace their XOR those indices.
           0 0 1
             ---  ---> do xor of indices [2,3] replace their XOR those indices.
           0 1 1
             ---  ---> again do xor of indices [2,3] replace their XOR those indices.
           0 0 0 ----> desired answer  

    index- 1 2 3 4 5 6 7 8
    t2-    3 1 4 1 5 9 2 6 from question

    do xor [4,7] and then replace

1    3- 000011
2    1- 000001
3    4- 000100

4    1- 000001
5    5- 000101
6    9- 001001
7    2- 000010
    ----------
       001111

8    6- 000110
    -------------
    x- 001


    3- 000011
    1- 000001
    4- 000100
    1- 000001
    5- 000101
    9- 001001
    2- 000010
    6- 000110
    -------------
    x- 001101



    Sorry if you don't understand the 2nd test case
    now i am just summarize what is want to say is

    Intuition & Approach:
    
    1. if you have even size of array , takes xor of all elements and replace that
    to those elements.
    1a. again takes xor of all elements and replace that to those elements
    the array all elements will become 0 always irrespective of case.

    2. if you have odd size of array , takes xor of (n-1) and replace that
    to those elements.
    2a. again takes xor of (n-1) and replace that to those elements
    the array (n-1) elements will become 0 always irrespective of case.
    2b.last one element is remaining what will now we do,
    we do xor of last two elements and replace
    2c.again do xor of last two elements and replace
    now last element also become 0.
    




*/

void number_of_operations_you_use( const int &n ){
    if( even(n) ){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
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
        int x;
        for(int i=0;i<n;i++) cin>>x;
        number_of_operations_you_use( n );
    }

    return 0;
}