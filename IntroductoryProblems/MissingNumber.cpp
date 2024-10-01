#include<iostream>
using namespace std;

int main() {
    long long n, m;
    cin>>n;
    long long totalSumExpected = (n*(n+1))/2;
    long long totalSumActual = 0;
    for(int i=1;i<n;i++) {
        cin>>m;
        totalSumActual+=m;
    }
    cout<<(totalSumExpected - totalSumActual);
}