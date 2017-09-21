#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string>
#include <string.h>
#include <limits.h>
#include <stdlib.h> 

#define MAX_SIZE 8192

int main(){
    int in, out, temp;
    char *buff = new char[MAX_SIZE];
    short *buff_16 = new short[MAX_SIZE / 2];

    umask(0);
    if((in = open("/Users/daixiang/Downloads/32float.pcm", O_RDONLY)) > 0
            && (out = open("/Users/daixiang/Downloads/16bit.pcm", O_CREAT | O_TRUNC | O_WRONLY, 0777)) > 0){

        while((temp = read(in, buff, MAX_SIZE)) > 0){
            float *buff_32 = (float *)buff;
            float number;
            for(int i = 0; i < temp / 4; i++){
                number = buff_32[i] * 32767;
                buff_16[i] = number;
            }
            write(out, (void *)buff_16, temp / 2);
            memset(buff, 0, temp);
        }
    }
}
