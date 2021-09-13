#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    
    while(t--){
        
        int x1, x2, y1, y2, z1, z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        
        int ans = abs(x1-y1)+abs(x2-y2);
        
        if((x1==y1 && y1==z1) || (x2==y2 && y2==z2)){
            if(z1 >= min(x1, y1) && z1<= max(x1, y1) && z2>=min(x2, y2) && z2<=max(x2, y2)) ans += 2;
        } 
        cout<<ans<<"\n";
    }
    
    
    return 0;
}
