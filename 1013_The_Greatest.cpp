#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,s;
 cin>>a>>b>>s;
 int MaiorAB=(a+b+abs(a-b))/2;
 int m=(MaiorAB+s+abs(MaiorAB-s))/2;
 cout<<m<<" "<<"eh o maior"<<endl;

 return 0;
}
