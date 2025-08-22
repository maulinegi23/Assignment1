/*2) Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.*/
#include<stdio.h>
#include<math.h>
int i,n,arr[100];
void create()
{
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array created successfully.\n");
}
int main(){
    create();
    int j, k;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}