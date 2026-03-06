#include<iostream>
using namespace std;
int main()
{
    char *T = "ABCAADABC";
    char *p = "AAD";

    int n = 9;
    int m =3;

    for(int i=0;i<n-m;i++)
    {
        int j = 0;
        while(j<m && T[i+j] == p[j])
        {
            
        }
    }

}