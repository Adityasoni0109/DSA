#include<bits/stdc++.h>
using namespace std;
int c=0;
void print(){
    if(c==5){return;}
    else{
        cout<<"Aditya ";
        c++;
    }
        print();
}
int main()
{
    print();
    return 0;
}