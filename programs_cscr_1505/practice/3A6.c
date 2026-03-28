#include<stdio.h>


typedef struct
{
    float im;
    float iw;
}i;
i pop(float p)
{
    float m,w,l,lm,lw;
    i r;
    l=p*0.48;
    m=p*0.52;
    w=p*0.48;
    lm=p*0.35;
    lw=m-lm;
    r.im=m-lm;
    r.iw=w-lw;
    return r;
}
int main()
{
    float p=80000;
    i x=pop(p);
    printf("illiterate men is %f\n",x.im);
    printf("illiterate women is %f\n",x.iw);
    return 0;
}