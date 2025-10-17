#include <bits/stdc++.h>
using namespace std;

int EvenFibonacciNumbers(long long n){
    long long a=0;
    long long b=1;
    int sum=0;
    while(sum<n){
        if(b%2==0) sum+=b;
        long long c=a+b;
        a=b;
        b=c;
    }
    return sum;
}

int main() {
    
    long long x;
    cin>>x;
    cout<<EvenFibonacciNumbers(x);
    
    return 0;
}