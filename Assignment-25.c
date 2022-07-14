#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main() {
	int fd;

	fd = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

	if (fd < 0) {
		printf("The open operation failed...\n");
		return -1;
	}
	
	printf("The open operation succeeded!\n");

	int writed = write(fd, "Writing test data to the file", 30);

	if (writed != 30) {
		printf("The write operation failed...\n");
		return -1;
	}

	printf("The write operation succeeded!\n");

	close(fd);

	
	return 0;
}