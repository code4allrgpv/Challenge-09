#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += abs(a[i]);
    }
    cout<<sum<<endl;
    return 0;
}
