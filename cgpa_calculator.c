#include<stdio.h>
int main()
{
    int cred[1000],mark[1000];
    int i,j,n;
    float numerator=0,denominator=0;
    int temp[100];
    int grad[100];
    float sgpa;
    //************************************************************************
    printf("Enter the total no of the Subjects including lab\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the credit and marks of the %d subject respectively\n",i+1);
        {
            scanf("%d%d",&cred[i],&mark[i]);
        }
    }
    
    //****************************************************************************
    //for copying mark to temp
    for(i=0;i<n;i++)
    {
        temp[i]=mark[i];
    }
   //*****************************************************************************
   //for storing grad marks
    for(i=0;i<n;i++)
    {
            if(temp[i]>=90)
            grad[i]=10;
            else if(temp[i]>=80&&temp[i]<90)
            grad[i]=9;
            else if(temp[i]>=70&&temp[i]<80)
            grad[i]=8;
            else if(temp[i]>=60&&temp[i]<70)
            grad[i]=7;
            else if(temp[i]>=45&&temp[i]<60)
            grad[i]=6;
            else if(temp[i]>=40&&temp[i]<45)
            grad[i]=4;
            else
            grad[i]=0;
    }
//**********************************************************************
//for displaying the marks , cred, and grad_point
    for(i=0;i<n;i++)
    {
        {
            printf("cred=%d\tMark=%d\tGrad_point=%d\n",cred[i],mark[i],grad[i]);
        }
    }
//***********************************************************************
//calculation sgpa
    for(i=0;i<n;i++)
    {
       numerator=numerator+grad[i]*cred[i];
       denominator=denominator+cred[i];
    }
  //final sgpa display  
    sgpa=numerator/denominator;
    printf("Your cgpa is %f",sgpa);
}