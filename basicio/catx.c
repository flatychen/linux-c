/*************************************************************************
	> File Name: catx.c
	> Author:
	> Mail:
	> Created Time: 2014年12月01日 星期一 14时45分07秒
 ************************************************************************/
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main (int count , char ** str)
{
    int fd ;
    if(count != 2 )
    {
        perror("less parameter;need two parameter !!");
        exit(0);
    }
    if((fd = open(str[1],O_RDONLY)) == -1)
    {
        perror("open file error");
        exit(0) ;
    }
    char c[50] ;
    while( read(fd,c,50) )
    {
        write(1,c,50);
    }
    puts("");
}


