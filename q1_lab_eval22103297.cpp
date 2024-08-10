#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int det=0;
cout<<"Enter the size of square matrix(works for size 2 and 3)"<<endl;
cin>>n;
int matrix[n][n];
cout<<"Enter the values of matrix";
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>matrix[i][j];

    }
}
   if(n==2)
    det=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    if(n==3)
        det=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1]);
    return det;

return 0;
}
