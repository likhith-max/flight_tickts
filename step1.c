#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sign_in(){//function for sign_in
    char username[50],p1[50],p2[50];
    printf("enter your username:");
    scanf("%s",username);
    printf("enter password:");
    scanf("%s",p1);
    printf("confirm password:");
    scanf("%s",p2);
    while(strcmp(p1,p2)!=0){
       printf("enter valid arguements!!!");
        printf("enter password:");
    scanf("%s",p1);
    printf("confirm password:");
    scanf("%s",p2);
    }
    printf("your password is confirmed\n");
    printf("your welcome!");
    }
    

void login(){//function for login
    char email[100];
    char pass[100];
    printf("enter you email:");
    scanf("%s",email);
    printf("enter password:");
    scanf("%s",pass);
}
void login_admin(){
    char email[100];
    char pass[100];
    char admin_email[]="nmit@123";
    char admin_pass[]="12345";
    printf("enter you email:");
    scanf("%s",email);
    printf("enter password:");
    scanf("%s",pass);
    while(strcmp(email,admin_email)!=0 && strcmp(pass,admin_pass)!=0){
        printf("enter proper details!");
        printf("enter you email:");
        scanf("%s",email);
        printf("enter password:");
        scanf("%s",pass);
    }
    }

int main(){
    int op,op1;
    printf("hello\nenter:\n1.admin\n2.user\n");//user or admin
    printf("give me your responce:");
    scanf("%d",&op1);
    switch(op1){
        case 1://admin is recognised
        login_admin();
        printf("welcome admin...");
        break;
        case 2://user is recognised
        printf("hello user");
        printf("\n1.login\n2.signin\n");
        scanf("%d",&op);
        switch(op){
        case 1:
        login();
        printf("welcome user...");
        break;
        case 2:
        sign_in();
        break;
        default:
        printf("enter valid arguments");
    }
     }
      
   
}
