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
    float *buff_32 = new float[MAX_SIZE / 2];

    umask(0);
    if((in = open("/Users/daixiang/Downloads/6+1_16k_16bit.pcm", O_RDONLY)) > 0
            && (out = open("/Users/daixiang/Downloads/32float.pcm", O_CREAT | O_TRUNC | O_WRONLY, 0777)) > 0){

        while((temp = read(in, buff, MAX_SIZE)) > 0){
            short *buff_16 = (short *)buff;
            for(int i = 0; i < temp / 2; i++){
                buff_32[i] = buff_16[i];
                buff_32[i] /= 32768.0f;
            }
            write(out, (void *)buff_32, temp * 2);
            memset(buff, 0, temp);
        }
    }
}
