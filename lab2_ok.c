#include <stdlib.h>
#include <stdio.h>

void iteratie_2(int x,int *i){

    if(x<0)
        {
            *i-=1;
            return 0;
        }

    x=x-2;
    *i+=1;
    iteratie_2(x,i);
    return x;
}

int main(){

	int a=30, i=0;


    iteratie_2(a,&i);

	printf("%d", i);
	return 0;
}
