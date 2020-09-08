//
//  FibMain.c
//  
//
//  Created by Juan Carlos Garcia on 08/09/20.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "FibMain.h"
#include "files.h"
#include "Sequences.h"

int main (void){
    long long int value = 0;
    int index = 0;
    clock_t start, stop;
    double cpu_time = 0;
    double mean = 0;
    File * record = NULL;
    long double buffer[OBSERVATIONS][VALUES] = {0};
    size_t obs = 0;
    
    record = file_new("fib_time.dat","w");
    
    for(obs = 0; obs < OBSERVATIONS; obs ++){
        printf("%zu\n", obs);
        start = clock();
        for(index = 0; index <= STATISTIC; index++){//recursividad
            Sequences_rfibo(obs);
        }//end for recursividad
        stop = clock();
        
        cpu_time = ((double)(stop-start)) /CLOCKS_PER_SEC /
            STATISTIC;
        buffer[obs][index] = obs;
        buffer[obs][RECURSIVE] = cpu_time;
        //printf("Recursive Fibo time %f s\t", cpu_time);
        
        
        start = clock();
        for(index = 0; index <= STATISTIC; index ++){//Sequential
            Sequences_sfibo(obs);
        }//end for Sequential
        stop = clock();
        
        cpu_time = ((double)(stop - start)) /CLOCKS_PER_SEC /
            STATISTIC;
        buffer[obs][ITERATIVE] = cpu_time * 1e3;
        //printf("Sequential Fibo time%f s\t",cpu_time*1e3);
        
    }//end for
    
    file_num_write(record,VALUES,buffer,OBSERVATIONS);
    fclose(record);
    
    
}
