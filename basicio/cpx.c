/************************************************************************* > File Name: catx.c
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
    int fd_src ,fd_dest;
    if(count != 3 )
    {
        perror("less parameter;need three parameter !!");
        exit(0);
    }
    if((fd_src = open(str[1],O_RDONLY)) + ( fd_dest= open(str[2],O_CREAT) ) == -2)
    {
        perror("open file error");
        exit(0) ;
    }
    char c[50] ;
    while( read(fd_src,c,50) )
    {
        write(fd_dest,c,50);
    }
}
