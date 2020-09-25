#include<stdio.h>
int main()
{
	float per;
	printf("enter the percentage of the student : ");
	scanf("%f",&per);
	if((per>=80)&&(per<=100))
        printf("A GRADE \n");
    else if((per>=70)&&(per<80))
        printf("B GRADE \n");
    else if((per>=60)&&(per<70))
        printf("C GRADE \n");
    else if((per>=45)&&(per<60))
        printf("D GRADE \n");
    else if(per<45)
        printf("FAIL \n");
    else
    {
        printf("\n YOU HAVE NOT ENTERED PERCENTAGE OF THE STUDENT BETWEEN 0 to 100 ");

    }

	return 0;
}
