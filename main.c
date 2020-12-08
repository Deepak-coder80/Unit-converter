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
    printf(" 1.Length\n 2.Speed\n 3.Time\n");
    printf("Enter your choice:");
    scanf("%d",&input1);

    //go to the convertion menu using switch case
    switch (input1){
    //case for length
    case 1:
        printf("You selected Length. please select the conversion\n ");
        printf(" 1.cm to m\n  2.m to cm\n");
        printf("Enter your choice:");
        scanf("%d",&input2);
        
        
        switch (input2)
        {
        //case for converting cm to m
        case 1:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value/100;
            printf(" %f cm = %f m",value,result);
            break;
        //case for convering m to cm
        case 2:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*100;
            printf(" %f m = %f cm",value,result);
            break;
        default:
            printf("Invalid Input");
            break;
        }
        break;
    //case for speed
    case 2:
        printf("You selected Length. please select the conversion\n ");
        printf(" 1.m/s to km/h\n  2.km/h to m/s\n");
        printf("Enter your choice:");
        scanf("%d",&input2);
        
        
        switch (input2)
        {
        //case for converting m/s to km/h
        case 1:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*3.6;
            printf(" %f m/s = %f km/h",value,result);
            break;
        //case for convering km/h to m/s
        case 2:
            printf("Enter the value you want to convert:");
            scanf("%f",&value);
            result = value*0.277777778;
            printf(" %f km/h = %f m/s",value,result);
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