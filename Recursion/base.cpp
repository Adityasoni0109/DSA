#include<bits/stdc++.h>
using namespace std;
int print(int n){
    static int c=0;
    if(c<n){
        cout<<c<<" ";
        c++;
        print(n);
    }
    else{
        return 0;
    }
}
int main()
{
    print(5);

    return 0;
}