#include<stdio.h>
int main(){
int a[5];
int temp;
printf("Enter the array element= ");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
int min;
for(int i=0;i<5;i++){
min=i;

for(int j=i+1;j<5;j++){
    if(a[j]<a[min]){
        min=j;
    }
    
}
temp=a[i];
a[i]=a[min];
a[min]=temp;


}
for(int i=0;i<5;i++){
    printf("%d",a[i]);
}
}