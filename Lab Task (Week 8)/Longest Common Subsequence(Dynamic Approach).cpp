#include<bits/stdc++.h>
using namespace std;
int m,n;
char b[20][20];

void printSequence(char str[],int i,int j)
{
    if(i==0 || j==0)
    {
        return;
    }
    if(b[i][j]=='c')
    {
        printSequence(str,i-1,j-1);
        cout<<str[i];
    }
    else if(b[i][j]=='u')
    {
        printSequence(str,i-1,j);
    }
    else{
        printSequence(str,i,j-1);
    }

}
void longestCommonSub(char str1[], char str2[])
{

    n = strlen(str1);
    m = strlen(str2);
    int lcs[n][m],i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i==0 || j==0)
            {
                lcs[i][j] = 0;
            }
            else if(str1[i]==str2[j])
            {
                lcs[i][j] = 1+lcs[i-1][j-1];
                b[i][j] = 'c';
            }
            else if(lcs[i-1][j]>=lcs[i][j-1]){
                lcs[i][j] = lcs[i-1][j];
                b[i][j] = 'u';
            }
            else{
                lcs[i][j] = lcs[i][j-1];
                b[i][j] = '1';
            }
        }
    }
    printSequence(str1,n-1,m-1);

}
int main()
{
    int i,j;
    string a1,a2;
    cout<<"First Sequence = ";
    cin>>a1;
    cout<<"Second Sequence = ";
    cin>>a2;
    char str1[a1.size()+2],str2[a2.size()+2];
    str1[0]='0';
    str2[0]='0';
    for(i=0,j=1; i<a1.size(); i++,j++)
    {
        str1[j] = a1[i];
    }
    str1[j]='\0';
    for(i=0,j=1; i<a2.size(); i++,j++)
    {
        str2[j] = a2[i];
    }
    str2[j]='\0';
    cout<<"DNA Most Match = ";
    longestCommonSub(str1,str2);
    cout<<endl;
}
