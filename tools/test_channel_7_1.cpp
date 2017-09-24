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
#define MIC_NUM 7

int main(){
    int in, out, len, index = 0;

    umask(0);
    if((in = open("./6+1_16k_16bit.pcm", O_RDONLY)) > 0){

        long count = lseek(in, 0L, SEEK_END);
        lseek(in, 0L, SEEK_SET);
        char *buff = new char[count];

        while((len = read(in, buff + index, MAX_SIZE)) > 0){
            index += len;
        }
//        write(out, (void *)buff, count);
        short **p = new short*[MIC_NUM];   
        for(int i = 0; i < MIC_NUM; i++)   
            p[i] = new short[count / 2 / MIC_NUM];   

        short *buff_16 = (short *)buff;
//      第一种
        for(int i = 0; i < MIC_NUM; i++)
            for(int j = 0; j < count / 2 / MIC_NUM; j++)
                p[i][j] = buff_16[j * MIC_NUM + i];
//      第二种
//        index = 0;
//        for(int i = 0; i < count / 2; i += MIC_NUM){
//            for(int j = 0; j < MIC_NUM; j++)
//                p[j][index] = buff_16[i + j];
//            index++;
//        }
        char path[64];
        for(int i = 0; i < MIC_NUM; i++){
            sprintf(path, "./16bit_%d.pcm", i + 1);
            if((out = open(path, O_CREAT | O_TRUNC | O_WRONLY, 0666)) > 0){
                write(out, (void *)p[i], count / MIC_NUM);
            }
        }
    }
}
