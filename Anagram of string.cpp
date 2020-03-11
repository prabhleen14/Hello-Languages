#include<iostream>
#include<string.h>
using namespace std;
int main()
{char a[10],b[10];
int i;
int H[26]={0};
cin>>a;
cin>>b;
if(strlen(a)==strlen(b))
{for(i=0;a[i]!='\0';i++)
{H[a[i]-97]+=1;
}
for(i=0;b[i]!='\0';i++)
{H[b[i]-97]-=1;
if(H[b[i]-97]<0)
{cout<<"Not an Anagram\n";
break;}
}
if(b[i]=='\0')
{cout<<"Anagram\n";
}}
else
    cout<<"Not an Anagram\n";
}
