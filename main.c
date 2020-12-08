/*
!!!!!!!!!!- PROJECT INFORMATION -!!!!!!!!!!!!!!!
====================================================================
Project Name  : Console unit Converter
Author        : DEEPAK M S
GitHub       : Deepak-coder80
Version      : 2.0.1
Discription : Simple console unit converter by c programming.
Tools Used  : VSCode,gcc compailer,Git
OS Used     : Windows 10
====================================================================
*/

//includde input-output and other liberies
#include<stdio.h>
#include<stdlib.h>

// main function as void
void main(){
    //intialize variables used 
    int input1,input2;
    float value,result;

    // print welcome message
    printf("                        ***********************************************\n"); 
    printf("                            HAI WELCOME TO THE UNIT CONVERTER\n ");
    printf("                        ***********************************************\n");
    printf("\n");

    //Ask the user to enter the type of quantity
    printf("Select the quantity type\n");
    printf("\n");
    printf(" 1.Length\n 2.Speed\n 3.Time\n");
    printf("\n");
    printf("Enter your choice:");
    scanf("%d",&input1);
    printf("\n");

    //go to the convertion menu using switch case
    switch (input1){
    //case for length
    case 1:
        printf("You selected Length. please select the conversion\n ");
        printf("\n");
        printf(" 1.cm to m\n 2.m to cm\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d",&input2);
        printf("\n");
        
        switch (input2)
        {
        //case for converting cm to m
        case 1:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value/100;
            printf("\n");
            printf(" %f cm = %f m",value,result);
            break;
        //case for convering m to cm
        case 2:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*100;
            printf("\n");
            printf(" %f m = %f cm",value,result);
            break;
        default:
            printf("Invalid Input");
            break;
        }
        break;
    //case for speed
    case 2:
        printf("You selected Speed.\nplease select the conversion\n ");
        printf(" 1.m/s to km/h\n  2.km/h to m/s\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d",&input2);
        printf("\n");
        
        switch (input2)
        {
        //case for converting m/s to km/h
        case 1:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*3.6;
            printf("\n");
            printf(" %f m/s = %f km/h",value,result);
            break;
        //case for convering km/h to m/s
        case 2:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*0.277777778;
            printf("\n");
            printf(" %f km/h = %f m/s",value,result);
            break;
        default:
            printf("Invalid Input");
            break;
        }
        break;
    //case for time
    case 3:
        printf("You selected Time.\nplease select the conversion\n ");
        printf("\n");
        printf(" 1.seconds to hours\n 2.hours to seconds\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d",&input2);
        printf("\n");
        
        switch (input2)
        {
        //case for converting cm to m
        case 1:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value/60;
            printf("\n");
            printf(" %f seconds = %f hour",value,result);
            break;
        //case for convering m to cm
        case 2:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*60;
            printf("\n");
            printf(" %f hours = %f seconds",value,result);
            break;
        default:
            printf("Invalid Input");
            break;
        }
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}