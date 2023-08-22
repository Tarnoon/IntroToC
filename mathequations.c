/*
Assignment:  Laboratory Assignment 05 "minimum, maximum, mean, median, and mode"
Filename:    mathequations.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include<stdio.h>
int main() {

int num_Value;
int max;
int min;
int x;
double sum;
double mean;
double median;


// scan for array size
scanf("%d",&num_Value);
int my_array[num_Value];
// Step 0 assign values in to the array 
 for(int i = 0; i < num_Value; i++)
    {
        scanf("%d",&my_array[i]);
    }
//Step 1 max and min
min = max = my_array[0];
// set all as first input then find min and max 
    for(int i = 1; i < num_Value; i++)
    {
         if(my_array[i] < min){
            min = my_array[i];
         }
		     
		   if(my_array[i] > max){ 
            max = my_array[i];
           }       
    }
    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
// Step 2 find average 
for(int i = 0; i < num_Value; i++) {
    sum += my_array[i];
}
mean = sum / num_Value;
printf("Mean: %.1f\n", mean);
//sorting ascending order
for(int i = 0; i <= num_Value - 1; i++){
    for(int j = 0; j <= num_Value - 1; j++){
        if(my_array[j] <= my_array[j+1]){
            x = my_array[j];
            my_array[j] = my_array[j+1];
            my_array[j+1] = x;
        }
        else {
            continue;
        }
    }
}
if (num_Value % 2 == 0){
    median = (my_array[num_Value/2] + my_array[(num_Value/2)-1]) / 2.0;
}
else {
    median = my_array[num_Value/2 - 1];
}
printf("Median: %.1f\n", median);
// step 4 
int maxCount = 0;
int mode = 0;

for (int i = 0; i < num_Value; i++) {
    int count = 0;
    for(int j = 0; j < num_Value; j++){
        if (my_array[i] == my_array[j]){
            count++;
        }
    }
    if ( count > maxCount) { 
        maxCount = count;
        mode = my_array[i];
    }
}
printf("Mode: %d", mode);

}
