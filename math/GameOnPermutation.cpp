//Question link-https://codeforces.com/problemset/problem/1860/C

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int minTotal=n+1;
        int adjLeft=n+1;
        int count=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(!(a<minTotal || a>adjLeft)){
                count++;
                adjLeft=a;
            }           
            minTotal=min(minTotal,a);
        }cout<<count<<endl;
    }
    return 0;
}
