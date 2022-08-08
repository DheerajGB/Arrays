#include<stdio.h>
#include<conio.h>
main()
{
      int a[10];
      int n,loc;
      int i;
      
       printf("Enter the size of an array:-");
       scanf("%d",&n);
       
       printf("\n enter the elements:-");
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);    
       }  
       
       printf("\n enter the postion of the element you want to delete:-");
       scanf("%d",&loc);
       
       if(loc >= n+1 )
       printf("\nDeletion not possible.\n");
      
      else
      { 
          for(i=loc;i<n-1;i++)
          {
                  a[i]=a[i+1];
          }
          
      }
        printf("\n Array after deletion:-");
       for(i=0;i<n-1;i++)
       {
           printf("%d\n",a[i]);    
       }  
       
       
       
       getch();
}

