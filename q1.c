#include <stdio.h>
int main(){
    int n;
    int h;
    scanf("%d",&n);
    scanf("%d",&h);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int low = 0;
    int high = n-1;
    int result = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==h){
            result = mid+1;
            break;
        }
        else if(a[mid]<h){
            low=mid+1;
        }
        else if(a[mid]>h){
            high = mid-1;
        }
    }
    printf("%d",result);
}
