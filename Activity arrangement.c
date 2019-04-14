#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[]={1,3,0,5,3,5,6,8,8,2,12};
    int b[]={4,5,6,7,8,9,10,11,12,13,14};
    int i;
    int n=(sizeof(a)/sizeof(int)-1);
    change(a,b,n);
}
void change(int a[],int b[],int n){
    printf("1%3d%3d\n",a[0],b[0]);
    int i;
    int j=0;
    for(i=1;i<=n;i++){
        if (a[i]>=b[j]){
            j=i;
            printf("1%3d%3d\n",a[i],b[j]);
        }
            else{
                printf("0%3d%3d\n",a[i],b[i]);
            }
        }
    }

