#include <windows.h>
#include <stdio.h>

int main()
{
    char q=34,
    n=10,*a="main () { char q=34,n=10,*a=%c%s%c;printf (a,q,a,q,n);}%c";
    printf (a,q,a,q,n);
    system("pause");
    return 0;
}
