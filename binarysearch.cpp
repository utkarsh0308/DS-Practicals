#include<stdio.h>
int binarySearch(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n;
    int key;
    printf("Enter Total no. of Elements for Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements for Array in ascending order : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Search For : ");
    scanf("%d",&key);
    
    if(arr[binarySearch(arr,n,key)]==key){
        printf("\nGiven Element found at %d position in array",binarySearch(arr,n,key));
    }
    else{
        printf("\nElement Not Found!!");
    }
}
