#include <stdio.h>
int main()
{
int a1[26];
char a[100000],b[100000];
int t,i,j;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%s",a);
scanf("%s",b);
if(strlen(a)==strlen(b))
{
for(j=0;j<26;j++)
a1[j]=0;
for( j=0;j<strlen(a);j++)
{
a1[a[j]-'a']++;
a1[b[j]-'a']--;
}
for(j=0;j<26;j++)
if(a1[j]!=0)
break;
if(j==26)
printf("YES\n");
else
printf("NO\n");
}
else
printf("NO\n");
}
return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/