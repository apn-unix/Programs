#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<error.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/types.h>
#include<linux/cdrom.h>
#include<unistd.h>
int main()
{
    int fd,ret,cl;
    fd = open("/dev/cdrom",O_RDONLY|O_NONBLOCK);
    if(fd == -1) { 
     
        printf("%s",strerror(errno));
        exit(EXIT_FAILURE);
    }
    ret = ioctl(fd,CDROMEJECT);
    if(ret == -1) {
     
         printf("%s",strerror(errno));
    }
    sleep(2);
    cl = ioctl(fd,CDROMCLOSETRAY,0);
    if(cl==-1){
            
          printf("%s",strerror(ENOSYS));
    }

   exit(EXIT_SUCCESS);
}

