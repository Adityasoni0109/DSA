#include<bits/stdc++.h>
using namespace std;
// int summ=0;
// int sum(int i , int n){
//     if(i>n){
//         return summ;
//     }
//     else{
//         summ+=i;
//         sum(i+1,n);
//     }
// }
int sum(int i,int summ){
    if(i<1){
        return summ;
    }
    else{
        sum(i-1,summ+i);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n,0);555;

    return 0;
}