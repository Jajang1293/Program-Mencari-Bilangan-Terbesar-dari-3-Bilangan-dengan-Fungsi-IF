#include<stdio.h>
void main()
{
    int a,b,c,max,min;
    printf("Mencari Bilangan terbesar dari 3 bilangan dengan fungsi IF\n");
    printf("===========================================================\n");
    printf("Masukan Bilangan 1 : ");scanf("%d",&a);
    printf("Masukan Bilangan 2 : ");scanf("%d",&b);
    printf("Masukan Bilangan 3 : ");scanf("%d",&c);
    if (a>b){max=a; min=b;}
    else{max=b; min=a;}
    if(c>max) max=c;
    if(c<min) min=c;
    printf("\nBilangan terbesar adalah : %d",max);
    printf("\nBilangan terkecil adalah : %d",min);
}
