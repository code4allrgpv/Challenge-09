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
        string s;
        cin>>s;

        int n = s.length();
        int count = 1;
        int tot = 0;
        int start = 0;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                if(count>=3){
                    cout<<start<<" ";
                    tot++;
                }

                count=1;
                start = i;
            }
        }
        if(count>=3){
            cout<<start<<" ";
            tot++;
        }
        
        if(tot == 0) cout<<-1;
        cout<<"\n";
    }
    
    return 0;
}
