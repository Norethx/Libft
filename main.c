#include "libft.h"

int main(void)
{
	int fd;
	char *str;

	fd = open("text1.txt",0);
	str = get_next_line(fd);
	while (str)
	{
		printf("================\n");
		printf("%s",str);
		printf("================\n");
		free(str);
		str = get_next_line(fd);
	}
	str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
		str = get_next_line(fd);
	printf("================\n");
	printf("%s",str);
	printf("\n================\n");
	printf("================\n");
	printf("%u",BUFFER_SIZE);
	printf("\n================\n");
	close(fd);
}
