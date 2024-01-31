#include<bits/stdc++.h>
using namespace std;
// int i=1;
// void print(int n){
//     if(i==n+1){
//         return;
//     }
//     else{
//         cout<<i<<" ";
//         i++;
//         print(n);
//     }
// }

// by backtracking 
void print(int i , int n){
    if(i==0){
        return ;

    }
    else{
        print(i-1,n);
        cout<<i<<" ";
    }
}
int main()
{
    print(6,6);
    
    return 0;
}