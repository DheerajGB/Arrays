#include<stdio.h>
#include<conio.h>

main()
{
      int a[10];
      int n,item,loc;
      int i;
      
       printf("enter the size of an array:-");
       scanf("%d",&n);
       
       printf("\n Enter the elements:-");
       
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);    
       }  
       
        printf("\n Element you want to insert:-");
       scanf("%d",&item);
       
       printf("\n Enter the location:-");
       scanf("%d",&loc);
       
       for( i=n-1;i>=loc;i--)
       {
               a[i+1]=a[i];
       } 
       a[loc]=item;
       
       printf("\n Array after insertion:-");
       for(i=0;i<n+1;i++)
       {
           printf("%d\n",a[i]);    
       }  
       getch(); 
}

