#include<iostream>

int arr[5] ;
int arr2[5] ={1,2,3,4,5};
    printf("Enter maths marks: ");
    scanf("%d",&mat);
    printf("Enter english marks: ");
    scanf("%d",&eng);
    printf("Enter gujarati marks: ");
    scanf("%d",&guj);
    
    
    if (mat <35 || eng <35 || guj <35)    
      {
        printf("Student is fail");
      }
    else
    {
        total=mat+eng+guj+sci;
        printf("TOTAL MARKS:%d",total);
        per= total*100/300;
        printf("\nPERCENTAGE IS:%0.2f",per);
    
    if(per>=95)
    {
        printf("\nGRADE A");
    }
    else if(per>=80)
         {
         printf("\nGRADE B");
         }
    else if(per>=60)
         {
         printf("\nGRADE C");
         }
    else if(per>=40)
         {
         printf("\nGRADE D");
         }
    }
}
  return 0;
}