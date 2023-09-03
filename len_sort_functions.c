#include <stdio.h>
 
int main()
{
 
    int Arr[] = { 1,3,4,5 };
    // variable to store the size of Arr
    int length = *(&Arr+1)-Arr;   //*(&Arr + 1) - Arr;
 
    printf( "Number of elements in Arr[] is: %d", length);
    return 0;
}
