#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int mcd(int a, int b);
int euclides(int a,int b);
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nMCD: %d\n",mcd(a,b));
    return 0;
}

int mcd(int a, int b){
    if(a==b)
        return a;
    else if(a>b)
       return euclides(a,b);
    return euclides(b,a);
}

int euclides(int a,int b){
    if(a%b==0)
        return b;
    return euclides(b,a%b);
}