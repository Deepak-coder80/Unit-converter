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
    float values,result;

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
        printf(" 1.cm to m\n 2.m to cm\n");
        scanf("%d",&input2);
        printf("Enter your choice:");
        printf("\n");
        break;
    
    default:
        break;
    }
}