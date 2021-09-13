#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int start = -1;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a'){
                start = i;
                break;
            }
        }
        if(start==-1){
            cout<<"NO"<<"\n";
            continue;
        }
        int left = start-1;
        int right = start+1;
        char c = 'b';
        bool found = true;
        while(left>=0 || right<s.length()){
            if(left>=0 && s[left]==c){
                left--;
                c++;
            }
            else if(right<s.length() && s[right]==c){
                right++;
                c++;
            }
            else{
                found = false;
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(found)
        cout<<"YES"<<"\n";
    }
    return 0;
}
