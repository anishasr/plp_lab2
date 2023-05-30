 #include <stdio.h>
 #include <stdbool.h>

int main()
{
    // int, float
    int a = 12345;
    float b = 12345.6789;

    // no built-in String type, array of chars
    char string123[] = "onetwothree";

    // boolean not a built-in type, imported
    bool isStudent = true;
    
    // sum of int and float widens to float
    float sum1 = a+b;
    printf("%f", sum1);
    
    // elements in array/list must be of same type
    int nums[] = {2,4,6,8};
    char letters[] = {'a','b','c'};

    // type conversions
    int num = 85;
    char numStr[10];
    sprintf(numStr, "%d", num);
    
    // print numStr to verify conversion
    printf("\nNow a string: %s", numStr);

}