#include <stdio.h>
void swapNumbers(int *x,int *y,int *z);
int main()
{
    int e1,e2,e3;
@@ -20,11 +19,3 @@ int main()
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",e1,e2,e3);
    return 0;
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
