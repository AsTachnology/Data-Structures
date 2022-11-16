#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   int  ch,i,phoneno=0,trphoneno;
   char name[100],address[100];
   int  accno,useraccno;
   int  amount,tramount;
   int  password,userpass;

   accno=10374789;
   
    while(1)
    {
      printf("*** 🏦 Walcome in Bank of India 🏦 ***");
      printf("\n\n_______________Service________________");
      printf("\n\nCreate acount:    1");
      printf("\nAdd payment:\t  2");
      printf("\nWithdraw payment: 3");
      printf("\nCheck balance:\t  4");
      printf("\nExait:\t\t  5");
      printf("\n\n\n🔰 𝚌𝚛𝚎𝚊𝚝𝚎𝚍 𝚋𝚢 𝙰𝚜𝚃𝚊𝚌𝚑𝚗𝚘𝚕𝚘𝚐𝚢 🔰");
      printf("\n______________________________________");
      printf("\n\nSelect service: ");
      scanf("%d",&ch);

     switch(ch)           
     {
       case 1:
              printf("\nEnter your name: ");
              scanf("%s",&name);
              printf("Enter your phone number: ");
              scanf("%d",&phoneno);
              printf("Enter your address: ");
              scanf("%s",&address);
              printf("Set Password: ");
              scanf("%d",&password);
              printf("\n\nAccount is successfully created ✅");
              printf("\nAccount name:\t%s",name);
              printf("\nPhone number:\t%d",phoneno);
              printf("\nAccount Number:\t%d",accno);
              printf("\nPassword: \t%d\n",password);
       break;

       case 2: 
              accnot:
              printf("\nEnter account number: ");
              scanf("%d",&useraccno);
             
              if(accno==useraccno)
              {
                 goto accok;
              }
              else
              {
                printf("\n⚠️ Invalid account number");
                 goto accnot;
              }
                   
              accok:
              pnot:
              printf("\nEnter password: ");
              scanf("%d",&userpass);
                   
              if(password==userpass)
              {
                 goto pok; 
              }
              else
              {
                 printf("\n⚠️ invalid password");
                 goto pnot;
              }
              pok:     
         
              printf("\nEnter Payment: ");
              scanf("%d",&amount);
              printf("\n%d Successfully add your account",amount);
              printf("\n\n\n\n\n");
       break;

       case 3:
              ckbacnot:
              printf("\nEnter account number: ");
              scanf("%d",&useraccno);
             
              if(accno==useraccno)
              {
                 goto ckbacok;
              }
              else
              {
                printf("\n⚠️ Invalid account number");
                 goto ckbacnot;
              }
                   
              ckbacok:
              ckbpnot:
              printf("\nEnter password: ");
              scanf("%d",&userpass);
                   
              if(password==userpass)
              {
                 goto ckbpok;
              }
              else
              {
                 printf("\n⚠️ invalid password");
                 goto ckbpnot;
              }
              ckbpok:     
              printf("\n|Add online transaction phone number|");
              printf("\nEnter number:");
              scanf("%d",&trphoneno);
              printf("\nEnter amount:");
              scanf("%d",&tramount);
            
              amount= amount-tramount;
            
              printf("\n₹%d Successfully transfer to %d",tramount,trphoneno);
              printf("\n\n");
       break;

       case 4:
              ckacnot:
              printf("\nEnter account number: ");
              scanf("%d",&useraccno);
             
              if(accno==useraccno)
              {
                 goto ckacok;
              }
              else
              {
                printf("\n⚠️ Invalid account number");
                 goto ckacnot;
              }
                   
              ckacok:
              ckpnot:
              printf("\nEnter password: ");
              scanf("%d",&userpass);
                   
              if(password==userpass)
              {
                 goto ckpok;
              }
              else
              {
                 printf("\n⚠️ invalid password");
                 goto ckpnot;
              }
              ckpok:     
              printf("Account number: %d",accno);
              printf("\nCurrent Account Balance: %d",amount);
              printf("\n\n\n");
       break;
        
       case 5: printf("\nThanks for visiting Bank of India");
               exit(0); 
       break;
      
       default : printf("\n\t   Not found service   \n");
     }
       printf("\n\n\n\n\n\n");
   }
return 0;
}