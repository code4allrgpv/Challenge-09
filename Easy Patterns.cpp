#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i>0;i--){
            for(int j=i;j>0;j--)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
