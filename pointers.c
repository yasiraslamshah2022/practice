#include <stdio.h>
#include <stdlib.h>

int *function(int a, int *b)
{
    char *array =(char *)b; //a new pointer 'array' pointing to location b,
    for(int i=0; i<4;i++)
    {
        printf("\nValue ibs %d at %d",array[i], (array+i));
        printf("\nValue ibs %d at %d",b[i], (b+i));
    }
    return (array+1); //the one increeent will add 1 or 4 based on the pointer to which it is added
}
int main()
{
    unsigned int integer=300; // 00000000  00000000  00000001   00101100 =300
    unsigned int  *pointer_to_integer = &integer;
    char *char_pointer_to_integer = (char *)pointer_to_integer;//00101100=44 ; typecasting it to char pointer

    int array[] ={12,122,1222,12222}; //defnition of array , array is a pointer to first element
    int *pointer_to_integer2 = array;//a pointer can be refernced with array, 

    for(int i=0; i<4;i++)
    {
        printf("\npu ibs %d at %d",*(char_pointer_to_integer+i), (char_pointer_to_integer+i));// a pointer can be derefernced as this
        printf("\npu ibs %d at %d",char_pointer_to_integer[i], i);// and can also be evaluated through array notation
    }

    printf("\nValue of int is %d and its address is %x", *pointer_to_integer2, pointer_to_integer2);
    printf("\nvalue of array element is %d and  %d", *(array+0), *array);//two ways to get values
    int *function_pointer = function(integer,&array); //return type is pointer, pointing to pointer b, stored in function_pointer

    printf("\nF:Value is %d and its address is %x\n", *function_pointer,function_pointer);
    return 0;
}




