// write a function that inputs two int values and displays their product
#include <stdio.h>
void product(int a,int b);

int main()
{
    int a,b;
    
    printf("enter first number: ");
    scanf("%d",&a);
    
    printf("enter second number: ");
    scanf("%d",&b);
    
    product(a,b); // calling the function
    return 0;
}

void product(int a, int b)
{
    int p;
    p =a*b;
    printf("%d\n",p);
    
   
}
