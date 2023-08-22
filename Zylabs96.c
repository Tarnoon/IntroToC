/*
Assignment:  Laboratory Assignment 09 "zylab 9.6"
Filename:    Zylabs96.c
Author: Tarun Nair
REDID:  827972334
Lab Section:  CompE160 laboratory 13559
*/
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
 
    char title[100], colOne[100], colTwo[100], author[100][100];
    int numberOfNovels[100];
    int idx = 0;
    printf("Enter a title for the data:\n");
    fgets(title);
    printf("You entered: %s\n",title);
    printf("\nEnter the column 1 header:\n");
    fgets(colOne);
    printf("You entered: %s\n",colOne);
    printf("\nEnter the column 2 header:\n");
    fgets(colTwo);
    printf("You entered: %s",colTwo);
    
    while(1)
    {
        printf("\n");
        
        int comma = 0;
        
        
        char dataPoint[100];
        
        
        printf("\nEnter a data point (-1 to stop input):\n");
        fgets(dataPoint);
        
        
        if(strcmp(dataPoint,"-1")==0)
        {
            break;
        }
    
        
       
        for(int i=0;i<strlen(dataPoint);i++)
        {
            
            if(dataPoint[i]==',')
            {
                comma++;
            }
        }
        
        
        
        if(comma == 0)
        {
            printf("Error: No comma in string.");
        }
        
        else if(comma>1)
        {
            printf("Error: Too many commas in input.");
        }
        else
        {
            
            int digit = 1;
            
            
            char *name = strtok(dataPoint, ",");
            
            char tempName[100];
            
            strcpy(tempName,name);
            
            
            char *novelNumber = strtok(NULL,",");
            
            strncpy(novelNumber,&novelNumber[1],strlen(novelNumber)-1);
            
            novelNumber[strlen(novelNumber)-1] = '\0';
            
            for(int i=0;novelNumber[i]!='\0';i++)
            {
                
                if(isdigit(novelNumber[i])==0)
                {
                    digit = 0;
                    break;
                }
            }
            
            if(digit==0)
            {
                printf("Error: Comma not followed by an integer");
            }
            
            else
            {
                
                strcpy(author[idx],tempName);
               
                numberOfNovels[idx] = atoi(novelNumber);
                
                
                printf("Data string: %s",author[idx]);
                printf("\nData integer: %d",numberOfNovels[idx]);
                
                idx++;
            }
        }
    }
    printf("\n%33s\n",title);
    
    printf("%-20s|%23s\n",colOne,colTwo);
    printf("--------------------------------------------\n");
    
    for(int i=0;i<idx;i++)
    {
        printf("%-20s|%23d\n",author[i],numberOfNovels[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<idx;i++)
    {
        printf("%20s ",author[i]);
        for(int j=0;j<numberOfNovels[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}