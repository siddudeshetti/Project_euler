#include <bits/stdc++.h>
using namespace std;

void sumofmultiples(int x){
    long long sum=0;
    for(int i=1;i<x;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    cout<<sum;
}

int main() {
    
    int x;
    cin>>x;
    sumofmultiples(x);
    
    return 0;
}