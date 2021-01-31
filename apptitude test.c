#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
void record();
void close();
void start();
int main()
{
 system("cls");
 int choice,i;
 float total=0,correct=0,wrong=0;
 system("color 2");
 printf("\n\n\n\t\t\t\t\t");
 for(i=1;i<=35;i++)
  printf("*");
 printf("\n\t\t\t\t\t WELCOME TO PRACTICE APTITUDE TEST");
 printf("\n\t\t\t\t\t");
 for(i=1;i<=35;i++)
  printf("*");
 char name[20];
 printf("\n\n\n\t\t\t\t     \xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 printf("\n\n\tPress only 1 or 2 or 3 not any thing Else");
 printf("\n\n\n\t\t1. START Your test\n\t\t2. Show records\n\t\t3. Exit\n\n\n\tPress Enter after entering choice\n\n\n\t\tENTER YOUR CHOICE: ");
 scanf("%d",&choice);
 system("cls");

if(choice==1)
{
 printf("\n\n\t\t\t\t\t ........BEST OF LUCK!!........");
 FILE *ptr;
 ptr=fopen("record.txt","a+");
 printf("\n\n\n\n\t\tEnter Your Name : ");
 scanf(" %s",&name);
 fprintf(ptr,"\n %s",name);
 fclose(ptr);
 system("cls");
 printf("\n\n\t\t\t\t\t  INSTRUCTIONS");
 printf("\n\t\t\t\t\t");
 for(i=1;i<=16;i++)
  printf("-");
 printf("\n\n\n\tTotal Marks: 60\n\tTime: 90 Min");
 printf("\n\tThe Entrance Test will comprise of multiple choice questions (MCQs).\n\tYou will select one answer from the choices given.\n\tDifferent questions will be asked from each of the following areas:\n\t1. Computer (15)\n\t2. IQ (15)\n\t3. English (15)\n\t4. Math (15)\n\n\tPress Enter to Start Test");
 getch();
 start();
}
else if (choice==2)
{
 record();
}
else
{
 close();
}
}
void record()
{
 system("cls");
 system("color 3");
 printf("\n NAME\t\tSCORE\t\tPERCENTAGE");
 FILE *fp;
 fp=fopen("record.txt","r");
 char ch[150];
 while(!feof(fp))
 {
  fgets(ch,150,fp);
  puts(ch);
 }
 fclose(fp);
 int choice;
 printf("\n\n\n\n\n (Press 1 to go back to main menu And 2 for Exit)");
 printf("\n\n Enter Your choice = ");
 scanf("%d",&choice);
 if(choice==1)
 {
     main();
 }
 else
    close();
}

void start()
{
    char ch[255];
    float correct=0,wrong=0,total=0,per=0;
    int id,i,num,j=1,k=1,l=1,m=1;
    srand(time(0));
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCOMPUTER SECTION");
    printf("\n\n\n\t\t\tIt will contain 15 Question and you have to answer all questions!");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress ENTER");
    getche();
    while(j<5)
    {num=rand()%30+1;
    char choice[2];
    system("cls");
    FILE *fp;
    fp=fopen("test.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(fp,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,255,(FILE*)fp);
           printf("\n Q%d. %s",id,ch);
           break;
       }
    }
    FILE *mq;
    mq=fopen("mcqs.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(mq,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,255,(FILE*)mq);
           printf("\n %s",ch);
           break;
       }
    }
    printf("\n\n\n  NOTE : (Choice should be from [a,b,c,d], other options should be consider as wrong answer)");
    printf("\n\n Enter Your choice = ");
    scanf("%s",&choice);
    FILE *ans;
    ans=fopen("ans.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(ans,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
        fgets(ch,255,(FILE*)ans);
        if (choice[0]==ch[1])
          correct++;
        else
          wrong=wrong-0.5;
          j++;
        break;
        }
       }
    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tIQ SECTION");
    printf("\n\n\n\t\t\tIt will contain 15 Question and you have to answer all questions!");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress ENTER");
    getche();
    char choice[2];
    srand(time(0));
    while(k<5)
    {
        num=rand()%30+1;
    system("cls");
    FILE *fp;
    fp=fopen("IQq.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(fp,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,255,(FILE*)fp);
           printf("\n Q%d. %s",id,ch);
           break;
       }
    }
    FILE *mq;
    mq=fopen("IQop.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(mq,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,255,(FILE*)mq);
           printf("\n %s",ch);
           break;
       }
    }
    printf("\n\n\n  NOTE : (Choice should be from [a,b,c,d], other options should be consider as wrong answer)");
    printf("\n\n Enter Your choice = ");
    scanf("%s",&choice);
    FILE *ans;
    ans=fopen("IQa.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(ans,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
        fgets(ch,255,(FILE*)ans);
        if (choice[0]==ch[1])
          correct++;
        else
          wrong=wrong-0.5;
          k++;
          break;
        }
       }
    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tENGLISH SECTION");
    printf("\n\n\n\t\t\tIt will contain 15 Question and you have to answer all questions!");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress ENTER");
    getche();
    srand(time(0));
    while(l<5)
    {
        num=rand()%30+1;
    system("cls");
    FILE *fp;
    fp=fopen("engq.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(fp,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,1000,(FILE*)fp);
           printf("\n Q%d. %s",id,ch);
           break;
       }
    }
    FILE *mq;
    mq=fopen("enga.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(mq,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,1000,(FILE*)mq);
           printf("\n %s",ch);
           break;
       }
    }
    printf("\n\n\n  NOTE : (Choice should be from [a,b,c,d], other options should be consider as wrong answer)");
    printf("\n\n Enter Your choice = ");
    scanf("%s",&choice);
    FILE *ans;
    ans=fopen("eng.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(ans,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
        fgets(ch,1000,(FILE*)ans);
        if (choice[0]==ch[1])
          correct++;
        else
          wrong=wrong-0.5;
          l++;
         break;
        }
       }
   }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMATH SECTION");
    printf("\n\n\n\t\t\tIt will contain 15 Question and you have to answer all questions!");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress ENTER");
    getche();
    srand(time(0));
    while(m<5)
    {
        num=rand()%30+1;
    system("cls");
    FILE *fp;
    fp=fopen("mathq.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(fp,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,5120,(FILE*)fp);
           printf("\n Q%d. %s",id,ch);
           break;
       }
    }
    FILE *mq;
    mq=fopen("mathm.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(mq,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
           fgets(ch,5120,(FILE*)mq);
           printf("\n %s",ch);
           break;
       }
    }
   printf("\n\n\n  NOTE : (Choice should be from [a,b,c,d], other options should be consider as wrong answer)");
    printf("\n\n Enter Your choice = ");
    scanf("%s",&choice);
    FILE *ans;
    ans=fopen("matha.txt","r");
    for(i=0;i!=EOF;i++)
    {
       fscanf(ans,"%s",ch);
       id=atoi(ch);
       if(id==num)
       {
        fgets(ch,5120,(FILE*)ans);
        if (choice[0]==ch[1])
          correct++;
        else
          wrong=wrong-0.5;
          m++;
          break;
        }
       }
    }
  total=correct+wrong;
  per=(total/60)*100;
  system("color B");
  system("cls");
  printf("\n\n\t\t\t\t Your Score");
  printf("\n\t\t\t\t");
  for(i=1;i<=12;i++)
   printf("-");
  printf("\n\n  Your Positive marking is = %0.2f",correct);
  printf("\n\n  Your negative marking is = %0.2f",wrong);
  printf("\n\n  Your Total score is = %0.2f",total);
  printf("\n\n  Your Percentage is = %0.2f%",per);
  FILE *pt;
  pt=fopen("record.txt","a+");
  fprintf(pt,"\t\t%0.2f\t\t%0.2f%",total,per);
  fclose(pt);
  printf("\n\n\n\tPress 1 to go back to main menu And 2 for Exit\n");
 int choic;
 printf("\n\n\tEnter Your choice = ");
 scanf("%d",&choic);
 if(choic==1)
 {
     main();
 }
 else
    close();
}
void close(void)
{
    system("cls");
    system("color C");
 printf("\n\n\n\t This Project is done by: \n\t >> Zain ul abedin\n\t >> Atta e Rasool\n\t >> Ameer uddin shayyan\n\t >> Momin Basit\n");
}
