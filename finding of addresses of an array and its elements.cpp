#include<stdio.h> 
int main() {  
 int i;  
 int AR[5] = {12,20,8,16, 40};  
 printf("The address of the array is: %p\n", AR); 
 printf("The addresses of the four elements are as below.\n"); 
 for (i =0; i<5; i++) 
  printf("Address of AR [%d] = %p\n",i, AR+i); 
return 0;
}
