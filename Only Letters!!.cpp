#include<bits/stdc++.h>
using namespace std;


int main() {
     string s;
    cin>>s;
    
    stack<char> st;
    int n = s.length();
    
    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            st.push(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            st.push(s[i]);
        }
    }
    
    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            char c = st.top();
            st.pop();
            s[i] = c;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            char c = st.top();
            st.pop();
            s[i] = c;
        }
    }
    
    cout<<s;
    return 0;
}
