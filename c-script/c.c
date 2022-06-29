#include <stdio.h>
#include <string.h>

struct student {
	long sno;
	char name[10];
	float score[3];
};

void fun(struct student a)
{
	struct student b;
	int i;
	b = a;
	b.sno = 10002;
	strcpy(b.name, "Lisa");
	printf("\nThe data after modified :\n");
	printf("\nNo: %ld Name: %s\nScores: ", b.sno, b.name);
	for(i = 0; i < 3; i++)
		printf("%6.2f ", b.score[i]);
	printf("\n");
}

main()
{
	struct student s = {10001, "ZhangSan", 95, 80, 88};
	int i;
	printf("\n\nThe original data :\n");
	printf("\nNo: %ld Name: %s\nScores: ", s.sno, s.name);
	for(i = 0; i < 3; i++)
		printf("%6.2f ", s.score[i]);
	printf("\n");
	fun(s);
	getchar();
}
