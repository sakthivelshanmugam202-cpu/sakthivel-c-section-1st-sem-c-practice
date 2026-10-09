#include<stdio.h>
int main()
{
float tamil,english,maths,physics,chemistry,biology;
float percentage;
printf(marks in tamil=");
scanf("%f\n",&tamil);
printf(marks in english=");
scanf("%f\n",&english);
printf(marks in maths=");
scanf("%f\n",&maths);
printf(marks in physics=");
scanf("%f\n",&physics);
printf(marks in chemistry=");
scanf("%f\n",&chemistry);
printf(marks in biology=");
scanf("%f\n",&biology);
printf("percentage=");
percentage=(tamil+english+maths+physics+chemistry+biology)/6.0;
printf("%f\n",percentage);
return 0;
}
