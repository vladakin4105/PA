#include <stdlib.h>
#include <stdio.h>

int function (int x){

    if(x<0)
        return 0;
    else
    {
        x=x-2;
        return x;
    }
    function(x);
}

int main(){

	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}
