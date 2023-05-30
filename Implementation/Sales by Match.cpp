#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int count=0;
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
        if (ar[i]==ar[i+1]){
            count++;
            i++;
        }
       
    }
    cout<<count;  
    return 0;
}
