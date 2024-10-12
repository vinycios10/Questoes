#include <stdio.h>

int main()
{
    int d = 8, aux1 = 2, aux2 = 3;
    if(d==0 || d==1 || d==2 || d==3){
       printf("%d pertence a sequencia de fibonacci",d);
       return 1;
    }
    while(aux2 < d){
        int temp = aux2;
            aux2 += aux1;
            aux1 = temp;
    }
    if(aux2 == d)
        printf("%d pertence a sequencia de fibonacci",d);
    else
        printf("%d nao pertence a sequencia de fibonacci",d);
    return 0;
}