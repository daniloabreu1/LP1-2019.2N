#include <stdio.h>
main(){
    int n=0;
    while(n<11){
        n=n+1;
        if(n%2==1)
            continue;
        printf("%d\n",n);
    }
    system("pause");
}
