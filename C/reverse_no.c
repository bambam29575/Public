#include <stdio.h>
#include <stdlib.h>
int input, quo, rem;
void rev(int input)
{
    while(input!=0)
    {
        rem = input%10;
        if(rem != 0){
            printf("%d",rem);
        }
	    quo = input/10;
     	input = quo;
    }
	
}
int main()
{
    scanf("%d", &input);
    rev(input);	
	return 0;
}
