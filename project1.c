#include<stdio.h>

#include<conio.h>

void main()

{

             int q[100],size,head,x,y,seek=0,diff;

             float avg;

             printf();

             scanf("%d",&size);

             printf();

             for(x=1;x<=size;x++)

             {

                          scanf("%d",&q[x]);

             }

             printf();

             scanf("%d",&head);

             q[0]=head;

             printf("\n");

             for(y=0;y<=size-1;y++)

             {

                          diff=abs(q[y+1]-q[y]);

                          seek+=diff;

                          printf(q[y],q[y+1],diff);

             }

             printf();

             avg=seek/(float)size;

             printf();

             getch();
