#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdio.h>



int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/

bool diffs_found[size-1]; //Bool array to check if the lengths up to size-1 has been found
int diff;

for (int i = 0; i < size - 1; i++) // Makes sure the size is positive
{
    diffs_found[i] = false;
}

for (int i = 1; i < size; i++){
    diff = abs(seq[i-1] - seq[i]);
    diffs_found[diff] = true;
} //Loop to find all of the differences in the array and set them to true in diffs_found if its found

for (int i = 1; i < size; i++){

    if(diffs_found[i] != true)
    {
        printf("Sequence is not Jolly");
         return 0;
    }   
   
    } //This section checks if all differences up to size-1 has been found, if not the loop ends prematurely, if true the line below is printed
    printf("Sequence is Jolly");
    return 1;
}

