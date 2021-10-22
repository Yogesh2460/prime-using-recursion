#include<stdio.h>
    int main()
    {
       int c,number,div=0;
printf("Enter number: ");
    scanf("%d",&number);

    for(c=1;c<=number;c++)
    {
    if(number%c==0)
    {
    div++;
    }
    }
        if(div==2)
    {
        printf("%d is a prime number",number);
    }
    else
    {
    printf("%d is not a prime number",number);
    }
    return 0;
    }
