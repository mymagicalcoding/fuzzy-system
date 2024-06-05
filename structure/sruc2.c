/*Write a program that takes name, roll number and total mark of this course for 3
students from the keyboard. Then, it displays the name and roll number of the
student who has got the highest mark. It also displays the students’ name who
have failed (A student will fail when his/her mark is less than 60).*/
#include "stdio.h"

struct student {
	char name[40];
	int roll;
	float mark;
};

void main()
{
	struct student std_list[3];
	int i, max_index, max_mark;

	for (i=0;i<3;i++){
		printf ("Enter data for student %d: ", i+1);
		scanf ("%s %d %f", std_list[i].name, &std_list[i].roll, &std_list[i].mark);
	}

	max_index = 0;
	max_mark = std_list[0].mark;
	for (i=1; i<3; i++)	{
		if (std_list[i].mark > max_mark){
            max_mark = std_list[i].mark;
			max_index = i;
		}
	}
	printf ("Max mark achieved by: ");
	printf ("%s, roll no: %d\n", std_list[max_index].name, std_list[max_index].roll);

	printf ("The following students have failed: \n ");

	for (i=0; i<3; i++)	{
		if (std_list[i].mark < 40)

			printf ("%s\n", std_list[i].name);
	}

}
