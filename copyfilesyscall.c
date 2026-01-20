#include <unistd.h>
#include <fcntl.h>

int main() {
	int src,dest;
	char buffer[1024];
	int bytes;

	src=open("result.txt", O_RDONLY);
	dest= open("copyresult.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	while ((bytes=read(src,buffer, sizeof(buffer))) > 0 ){
		write(dest,buffer,bytes);
}
	close(src);
	close(dest);
	return 0;
}
