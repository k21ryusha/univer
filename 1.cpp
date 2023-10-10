#include "stdafx.h" 
#include <stdio.h>
#include <iostream>
#include "math.h" 
int main2(int argc, char* argv[]) 
{ 
float const g=9.8; 
float T;
int S;
printf("Enter S: "); 
scanf("%d",&S); 
T=sqrt(S*2/g); 
printf("T=%f\n", T); 
getchar(); 
return 0; 
}
