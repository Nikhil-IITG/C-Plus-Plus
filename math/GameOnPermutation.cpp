#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;cin>>t;
    while(t--){
        int noOfElement;cin>>noOfElement;
        int minTotal=noOfElement+1;
        int adjLeft=noOfElement+1;
        int count=0;
        for(int i=0;i<noOfElement;i++){
            int element;
            cin>>element;
            if(!(element<minTotal || element>adjLeft)){
                count++;
                adjLeft=element;
            }           
            minTotal=min(minTotal,element);
        }cout<<count<<endl;
    }
    return 0;
}
