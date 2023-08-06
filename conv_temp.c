//conversion of temperature 
#include<stdio.h>
int main()
{
	float temp_f,temp_c;
	printf("enter the temperatur of the city in farenheit degrees\n:");
	scanf("%f",&temp_f);
	temp_c = (temp_f-32)*5/9;
	printf("the temperature of the city in centigrade degrees is %f",temp_c);
	return 0;
	
}
