#include <stdio.h>

int main()
{
    int a,b,h;

    printf("Dikdortgen prizmasının a,b ve h uzunluklarını giriniz: ");
    scanf("%d%d%d",&a,&b,&h);

    printf("Taban alani: %d\nYanal alanlar toplami: %d\nToplam alani: %d\nHacmi: %d\n",a*b,2*a*h+2*b*h,2*a*b+2*a*h+2*b*h,a*b*h);


    return 0;
}
