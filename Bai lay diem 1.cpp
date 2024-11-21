#include<bits/stdc++.h>
using namespace std;
long long i,d,n,j,a,b;
string s,s1,s2;
int main(){
getline(cin,s);
s=' '+s;
for(i=1;i<s.size();i++){
    if(s[i-1]==' ' && s[i]>='a' && s[i]<='z')
    s[i]=char(s[i]-32);
    if(s[i-1]!=' ' && s[i]>='A' && s[i]<='Z')
    s[i]=char(s[i]+32);
}
while(s[0]==' ')
    s.erase(0,1);
for(i=0;i<s.size();i++)
    while(s[i]==' ' && s[i+1]==' ')
    s.erase(i,1);
cout<<s<<"\n";
return 0;
}
