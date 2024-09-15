/*

code snippet for Prime

bool isPrimeNumber( const int &n ){
    vector<int> isPrimeNumber(n+1,1);
    // 0 and 1 is not Prime
    isPrimeNumber[0] = isPrimeNumber[1] = 0;

    for( int num = 2; num*num<=n; num++ ){
        // if num is not Prime it means it is already divide by someone and its 
        // also divide by same multiple
        // so we do not need to finds its multiple again
        if( !isPrimeNumber[num] ) continue;

        for( int multiple_of_num = num*num; multiple_of_num<=n; multiple_of_num +=num){
            isPrimeNumber[ multiple_of_num ] = 0;
        }
    }
    return (bool) isPrimeNumber[n];
}

*/