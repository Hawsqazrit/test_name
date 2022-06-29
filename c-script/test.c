#include <stdio.h>

Today() {
	int day = 0;
	printf("请输入一个数字: ");
	scanf("%d", &day);
	switch (day) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("请输入1——7之间的数字！\n");
	}
}

main() {
	Today();
}
