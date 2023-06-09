#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1; i<n; i++){
        pre[i]=a[i]+pre[i-1];
    }
    int i, j;
    i=0;
    j=n-1;
    while(i<j){
        swap(pre[i], pre[j]);
        i++;
        j--;
    }
    
    
    for(int i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }
   
    return 0;
}