#include "stdafx.h" 
#include <stdio.h>
#include <iostream>
#include "Перекодировщик.h"
#include "math.h" 
#include <string>
int main() 
{ 
float const g=9.8;  
float T;
int S;
printf("Программа вычисляет время, за которое тело \ 
при ускорении %f\n пройдёт заданный путь.\n", g); 
printf("Введите длину пути в метрах: "); 
scanf("%d",&S); 
T=sqrt(S*2/g); 
printf("%s T=%f","Путь будет пройден за ", T); 
printf("%s\n"," секунд."); 
getchar(); 
return 0; 
}
