#include<iostream.h>

void main()
{
    int mat1[3][3], mat2[3][3];
    int i, j, k;
    cout<<"Enter the elements of Matrix(3X3) : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"\nMatrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    //Transposing Matrices
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat2[i][j]=mat1[j][i];
        }
    }
    cout<<"\nTransposed matrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}

