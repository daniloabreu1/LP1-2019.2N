#include <stdio.h>
typedef enum
{
    DOM=1,SEG,TER,QUA=8,QUI=6,SEX,SAB
} DIAS;
main()
{
    printf("DOM = %d\n",DOM);
    printf("SEG = %d\n",SEG);
    printf("TER = %d\n", TER);
    printf("QUA = %d\n",QUA);
    printf("QUI = %d\n",QUI);
    printf("SAB = %d\n",SAB);
}
