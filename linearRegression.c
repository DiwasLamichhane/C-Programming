//C program to fit a straight line on given points

#include<stdio.h>
int main(){
    int n;
    float sum1=0, sum2=0, sum3=0, sum4=0, a, b;
    printf("Enter no. of observations\n");
    scanf("%d", &n);
    float x[n], y[n], augumented_matrix[2][3];
    printf("Enter values of x\n");
    for(int i=0; i<n; i++)
    scanf("%f", &x[i]);
    printf("Enter values of y\n");
    for(int i=0; i<n; i++)
    scanf("%f", &y[i]);

    for (int i=0; i<n; i++)
    {
        sum1=sum1+x[i];
        sum2=sum2+y[i];
        sum3=sum3+x[i]*y[i];
        sum4=sum4+x[i]*x[i];
    }
    augumented_matrix[0][0]=n;
    augumented_matrix[0][1]=sum1;
    augumented_matrix[0][2]=sum2;
    augumented_matrix[1][0]=sum1;
    augumented_matrix[1][1]=sum4;
    augumented_matrix[1][2]=sum3;

    int ratio=augumented_matrix[1][0]/augumented_matrix[0][0];
    for(int i=0; i<3; i++)
    augumented_matrix[1][i]=augumented_matrix[1][i]- ratio*augumented_matrix[0][i];

    printf("\nThe upper triangular matrix: \n");
    for(int i=0; i<2; i++)
    {
    for(int j=0; j<3; j++)\
    printf("%.2f", augumented_matrix[i][j]);
    printf("\n");
    }

    b=augumented_matrix[1][2]/augumented_matrix[1][1];
    a=(augumented_matrix[0][2]-augumented_matrix[0][1]*b)/augumented_matrix[0][0];
    printf("\nIntercept = %.2f and slope = %.2f\n\n", a, b);
    printf("Equation of the line: y= %.2f + %.2fx",a, b);

}
