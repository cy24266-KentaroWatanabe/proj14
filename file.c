#include <fcntl.h>
int main(){
	char buff[10];
	int fd, re, wr, cl;
	fd = open("test.txt", O_RDONLY);
	if(fd < 0){
		perror("open error");
		exit(1);
	}
	re = read(fd, buff, 10);
	if(re < 0){
		perror("read error");
		exit(1);
	}
	wr = write(2, buff, 10);
	if(wr < 0){
		perror("write error");
		exit(1);
	}
	cl = close(fd);
	if(cl < 0){
		perror("close error");
		exit(1);
	}
}
