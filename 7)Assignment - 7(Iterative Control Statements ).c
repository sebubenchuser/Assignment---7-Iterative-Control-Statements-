                                            // Assignment - 7(Iterative Control Statements )(Completed)

//1. Write a program to find the Nth term of the Fibonnaci series.


    /*#include<stdio.h>
    int main()
    {
        int n,i=1,j=0,fibo=0,c=0;
        printf("Enter n number");
        scanf(" %d",&n);
        while(c<n)
        {
            fibo=i+j;

            i=j;
            j=fibo;
            c++;
        }
          printf("%d",fibo);
    }*/


//2. Write a program to print first N terms of Fibonacci series.

   /*#include<stdio.h>
    int main()
    {
        int n,i=1,j=0,fibo=0,c=0;
        printf("Enter n number");
        scanf(" %d",&n);
        while(c<n)
        {
            fibo=i+j;
          printf("%d",fibo);
            i=j;
            j=fibo;
            c++;
        }

    }*/

//3. Write a program to check whether a given number is there in the Fibonacci series or not.

    /*#include<stdio.h>
    int main()
    {
        int n,i=1,j=0,fibo=0;
        printf("Enter n number");
        scanf("%d",&n);
        while(fibo<n)
        {
            fibo=i+j;
            i=j;
            j=fibo;
        }
        if(n==fibo)
        printf("number is in Fibonacci series");
        else
        printf("number is not in Fibonacci series");
    }*/

//4. Write a program to calculate HCF of two numbers

   /* #include<stdio.h>
    int main()
    {
        int n,m,i,x,hcf=1;
        printf("Enter two numbers");
        scanf("%d%d",&n,&m);
        x=n<m?n:m;
        for(i=x;i>=1;i--)
        {
            if(n%i==0&&m%i==0)
            {
               hcf=hcf*i;
               break;
            }
        }
        printf("HCF is=%d",hcf);
    }*/

//5. Write a program to check whether two given numbers are co-prime numbers or not

    /*#include<stdio.h>
    int main()
    {
        int n,m,i,x;
        printf("Enter two number");
        scanf("%d%d",&n,&m);
        x=n<m?n:m;
        for(i=x;i>=1;i--)
        {
            if(n%i==0&&m%i==0)
            {
              break;
            }
        }
        if(i==1)
        printf("number is co-prime number");
        else
        printf("number is not co-prime number");
    }*/

//6. Write a program to print all Prime numbers under 100

    /* #include<stdio.h>
     int main()
     {
         int n,i,j,c;
         for(i=1;i<=100;i++)
         {
             c=0;
             for(j=i;j>=1;j--)
             {
                 if(i%j==0)
                 c++;
             }
             if(c==2)
             printf("%d ",i);
         }
     }*/

//7. Write a program to print all Prime numbers between two given numbers

   /* #include<stdio.h>
    int main()
    {
        int n,m,i,j,c;
        printf("Enter two numbers");
        scanf("%d%d",&n,&m);
        for(i=n;i<=m;i++)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                c++;
            }
            if(c==2)
        printf("%d ",i);
        }

    }*/

//8. Write a program to find next Prime number of a given number

   /*#include<stdio.h>
   int main()
   {
       int n,i,c,j;
       printf("Enter a number");
       scanf("%d",&n);
       for(i=n;i>=n;i++)
       {
           c=0;
           for(j=i;j>=1;j--)
           {
               if(i%j==0)
               c++;
           }
           if(c==2)
           {
           printf("next prime number is %d",i);
           break;
           }
       }
   }*/

//9. Write a program to check whether a given number is an Armstrong number or not

/* #include<stdio.h>
 int main()
 {
     int n,n1=0,l,m,c=0,i,l1,m1;
     printf("Enter a number");
     scanf("%d",&n);
     m=n;
     m1=n;
     while(n>0)
     {
        l=n%10;
        c++;
        n=n/10;
     }
     while(m>0)
     {
          l=m%10;
          l1=1;
        for(i=0;i<c;i++)
     {
       l1=l1*l;

     }

     n1=n1+l1;
     m=m/10;
     }
     if(n1=m1)
     printf("number is Armstrong number");
     else
     printf("number is not Armstrong number");

 }*/

//10. Write a program to print all Armstrong numbers under 1000

  /*#include<stdio.h>
  int main()
  {
      int i,j,l,arm,i1,i2;
      for(i=1;i<=9;i++)
      {
          i2=i;
          arm=0;
          while(i2>0)
          {
              l=i2%10;
              arm=arm+l;
              i2=i2/10;
          }
          if(i==arm)
          printf("%d ",i);
      }
      for(i=10;i<=99;i++)
      {
          i2=i;
          arm=0;
          while(i2>0)
          {
              l=i2%10;
              arm=arm+(l*l);
              i2=i2/10;
          }
          if(i==arm)
          printf("%d ",i);
      }
      for(i=100;i<=999;i++)
      {
          i2=i;
          arm=0;
          while(i2>0)
          {
              l=i2%10;
              arm=arm+(l*l*l);
              i2=i2/10;
          }
          if(i==arm)
          printf("%d ",i);
      }
      for(i=999;i<=1000;i++)
      {
          i2=i;
          arm=0;
          while(i2>0)
          {
              l=i2%10;
              arm=arm+(l*l*l*l);
              i2=i2/10;
          }
          if(i==arm)
          printf("%d ",i);
      }

  }*/

