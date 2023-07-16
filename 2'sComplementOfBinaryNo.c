// WAP to calculate 2's complementof any binary numbers
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of binary number:");
    scanf("%d",&size);
    int binary[size];
    printf("Enter a binary number in bits:");
    for(int i=0;i<size;i++){
        scanf("%d",&binary[i]);
    }
    printf("\n");
    int carry=1;

    for(int i=size-1;i>=0;--i){
        binary[i]=(binary[i]==0)?1:0;
    }
    for(int i=size-1;i>=0;--i){
        binary[i]+=carry;
        carry=binary[i]/2;
        binary[i]%=2;
    }
    printf("2's complement: \n");
    for(int i=0;i<size;i++){
        printf("%d",binary[i]);
    }
return 0;
}
