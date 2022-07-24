#pragma once

#include <time.h>
#include <memory.h>
#include <stdlib.h>

void RandomArrayGenerator(int* array, int NUM)
{
    #define _MAX_ 1000

    srand(time(NULL)); // Uses current time as seed
    
    for (int j=0; j<NUM; j++)
        array[j] = rand() % _MAX_;
}