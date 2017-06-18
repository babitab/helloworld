#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 static int compare( const void *a , const void *b)
 {
     return strcmp(*(const char **)a , *(const char **)b) ;

 }
 void sort(const char *arr[] ,int n)
 {
     qsort(arr , n, sizeof(const char *) ,compare );
 }
 int main()
 {
     const char *arr[] = {"babita" ,"sudhir" ,"suman","sunita","devanshi"};
     int n = sizeof(arr)/sizeof(arr[0]);
     int i;
     printf("given array is : \n");
     for(i=0  ;i <n ; i++)
     {
        printf("%d :%s  \n", i, arr[i]);
     }
     sort(arr ,n);
     printf("after sorting :\n");
     for(i=0 ; i<n ;i++)
     {
         printf("%d :%s \n ",i,arr[i]);
     }
 }

