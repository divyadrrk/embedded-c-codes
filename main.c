#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sig[]={1,1,0,1,1,0,1,1,0,1,1,1,0,1,1,1,1,0,0,1,1,0};
    int len =sizeof(sig);
    len=len/4;
    int rise=0;
    int fall=0;
    int i;
    //printf("Sample no   ||  Sample value    ||  Outcome     ");
    for(i=0;i<len;i++)
    {
        if(sig[i]==sig[i+1])
            printf("Sample no: %03d  ||  Sample value: %d  ||  level\n", i+1,sig[i]);
        else if(sig[i]==0 && sig[i+1]==1)
        {
            printf("Sample no: %03d  ||  Sample value: %d  ||  rising edge detected\n", i+1,sig[i]);
            rise++;
        }
        else
        {
            printf("Sample no: %03d  ||  Sample value: %d  ||  falling edge detected\n", i+1,sig[i]);
            fall++;
        }
    }
    printf("\n no. of rising edges: %d \t no. of falling edges: %d\n", rise,fall);
    return 0;
}
