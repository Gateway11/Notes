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
    int in, out, len, index = 0;

    umask(0);
    if((in = open("/Users/daixiang/Downloads/6+1_16k_16bit.pcm", O_RDONLY)) > 0){

        long count = lseek(in, 0L, SEEK_END);
        lseek(in, 0L, SEEK_SET);
        char *buff = new char[count];

        while((len = read(in, buff + index, MAX_SIZE)) > 0){
            index += len;
        }
        short *buff_16 = (short *)buff;
//        write(out, (void *)buff, count);
        short **p = new short*[7];   
        for(int i = 0; i < 7; i++)   
            p[i] = new short[count / 2 / 7];   

        index = 0;
        for(int i = 0; i < count / 2; i += 7){
            for(int j = 0; j < 7; j++)
                p[j][index] = buff_16[i + j];
            index++;
        }
        char path[64];
        for(int i = 0; i < 7; i++){
            sprintf(path, "/Users/daixiang/Downloads/16bit_%d.pcm", i);
            if((out = open(path, O_CREAT | O_TRUNC | O_WRONLY, 0777)) > 0){
                write(out, (void *)p[i], count / 7);
            }
        }
    }
}
