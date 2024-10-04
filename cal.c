#include<stdio.h>;
#include<conio.h>>

int main(){
    
    int a, b,c;
   


     printf("Enter the values of a and b");
     scanf("%d %d",&a, &b);

 
    printf("For addition press 1 for subtraction 2 for multiplication 3 and for division 4");
    scanf ("%d", &c);
    
    if(c==1){
        int sum = a+b;
        printf("The sum is : %d", sum);
    }

    else if(c==2){
        int sub = a-b;
        printf("The sub is : %d", sub);
    
    }

    else if(c==3){
        int pro = a*b;
        printf("The pro is : %d", pro);
    }
    else if(c==4){
        int rem = a/c;
        printf("The rem is : %d", rem);
    }
    else
        printf("CHOOSE RIGHT OPERATION");
    
    return 0;

}