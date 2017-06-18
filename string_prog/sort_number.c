#include <stdio.h>
#include <stdlib.h>

 static int values[] = { 88, 56, 100, 2, 25 };

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) 
   {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), compare);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) 
   {   
      printf("%d ", values[n]);
   }
  
   return(0);
}
