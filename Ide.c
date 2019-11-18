#include <stdio.h>
int bottle(int n)
{
    for(n=100;n>2;n--)
    {
        printf("%d bottles of beer on the wall\n %d bottles of beer\n take one down, pass it around\n %d bottles of beer on the wall\n",n,n,n-1);
    }
    return 0;
}
int main() {
    int n;
    bottle(n);
    printf("2 bottles of beer on the wall\n 2 bottles of beer\n take one down, pass it around\n 1 bottle of beer on the wall");
    printf("\n");
    printf("1 bottle of beer on the wall\n 1 bottle of beer\n take one down, pass it around\n no bottle of beer one the wall");

    return 0;
}