/*
*
*Lab5
*Program:Solution for tower of hanoi using recursion.
*Author: Pratyush Nepal
*Ref:Data structure and algorithn book.
*
*/
#include <stdio.h>

void towers(int, char, char, char);

main()
{
int i;
printf("Enter the number of disks to check the solution for tower of hanoi : ");
scanf("%d", &i);
towers(i, ' peg A', 'peg C', ' peg B');
return 0;
}
void towers(int i, char frompeg, char topeg, char auxpeg)
{
if (i == 1)
{
printf("\n%s%c%s%c","move disk 1 from peg",frompeg,"to peg",topeg);
return;
}
towers(i - 1, frompeg, auxpeg, topeg);
printf("\n %s%d%s%c%s%c","move disk",i,"from peg",frompeg,"to peg",topeg);
towers(i - 1, auxpeg, topeg, frompeg);
}
