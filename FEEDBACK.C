#include<stdio.h>
int main()
{
FILE*fp;
char buffer[1000];
fp = fopen("FEEDBACK.txt","w");
if(fp == NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"Feedback of c programing\n");
fprintf(fp,"1.Learning C programing helps me improve my logical thinking.\n");
fprintf(fp,"2.learning C is useful and intersting.\n");
fprintf(fp,"3.Sometimes finding errors takes more time.\n");
fprintf(fp,"4.Practical sessions improve my coding skills.\n");
fprintf(fp,"5.C programming helps me learn new concepts.\n");
fclose(fp);
fp = fopen("FEEDBACK.txt","a");
if(fp == NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"feedback about c trainer\n");
fprintf(fp,"1.The trainer explains the concepts clearly.\n");
fprintf(fp,"2.All doubts are explained properly.\n");
fprintf(fp,"3.The trainer teaches every topic step by step.\n");
fprintf(fp,"4.practical examples help us learn better.\n");
fprintf(fp,"5.The trainer makes the class interesting.\n");
fclose(fp);
fp = fopen("FEEDBACK.txt","r");
if(fp == NULL)
{
printf("file cannot be opened");
return 0;
}
while(fgets(buffer,sizeof(buffer),fp)!=NULL)
{
printf("%s",buffer);
}
fclose(fp);
return 0;
}

