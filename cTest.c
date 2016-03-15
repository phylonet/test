#include <stdio.h>
#include <stdlib.h>


void doStuff(int *oneD)
{
xdsxfcxc



int main (int argc, const char * argv[]) 
{
    
    int stuff[8][8][4] = {0};
    
    
    int num = 0;
    for(int i = 0; i<8; i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<4;k++)
            {
                stuff[i][j][k] = num;
                num++;
            }
        }
    }
    
    printf("%d %d %d %d\n",stuff[0][0][0],stuff[0][0][1],stuff[0][0][2],stuff[0][0][3]);
    
    doStuff(stuff[0][0]);
    
    printf("%d %d %d %d\n",stuff[0][0][0],stuff[0][0][1],stuff[0][0][2],stuff[0][0][3]);
    
    
    
    return 0;
}

