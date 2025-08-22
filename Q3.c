/*this code initializes the first value of an array with 5 elements
therefore the output will be 10000*/

#include<stdio.h>

int main()
{
int i;
int arr[5] = {1};
for (i = 0; i < 5; i++) printf("%d",arr[i]);
return 0;
}