#include<bits/stdc++.h>
using namespace std;
// void print(int n){
//     if(n==0){
//         return;

//     }
//     else{
//         cout<<n<<" ";
//         n--;
//         print(n);
//     }
// }
void print(int i , int n){
    if(i == n+1){
        return ;
    }
    else{
        print(i+1,n);
        cout<<i<<" ";
    }
}
int main()
{
    print(1,6);
    return 0;
}