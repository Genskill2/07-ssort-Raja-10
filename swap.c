#include<stdio.h>


void swap_max(int arr[], int l, int n){
int  maxval=0;
int index=0;
  for(int i=n;i<l;i++){
      if (maxval<arr[i])
         maxval=arr[i]; 
         index=i;
    }
    arr[index]=arr[n];
    arr[n]=maxval;
return  ;           
}

void ssort(int arr[], int l){
  for(int i=0;i<l;i++)
    swap_max(arr,l,i);
    
return;
}
