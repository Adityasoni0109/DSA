#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "AAAbcdcbddbcbdcbwbfojkghnjkfghuihjdtgvgljketghjehgnjkjihyth,m.nerftgklhhjkabcbdbdbdbdbdefefghij";
    // Approach if lower case and uppercase are declared or defined
    // int ch[26]={0};
    // for(int i=0;i<s.size();i++){
    //     ch[s[i]-'a']+=1;
    // }
    // for(auto x:ch){
    //     cout<<x<<" ";
    // }
    int ch[256]={0};
    for(int i=0;i<s.size();i++){
        ch[s[i]]++;
    }
    int i=0;
    for(auto x:ch){
        cout<<i<<" "<<x<<endl;
        i++;
    }
    return 0;
}